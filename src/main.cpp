#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#include "sensor.h"
#include "processor.h"
#include "communication.h"
#include "system_monitor.h"

QueueHandle_t sensorQueue;

int main(void)
{
    sensorQueue = xQueueCreate(5, sizeof(int));

    xTaskCreate(SensorTask, "Sensor", 256, NULL, 1, NULL);
    xTaskCreate(ProcessingTask, "Processor", 256, NULL, 2, NULL);
    xTaskCreate(CommunicationTask, "Comm", 256, NULL, 1, NULL);
    xTaskCreate(MonitorTask, "Monitor", 256, NULL, 1, NULL);

    vTaskStartScheduler();

    while (1);
}

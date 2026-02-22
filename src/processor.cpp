#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include <stdio.h>

extern QueueHandle_t sensorQueue;

void ProcessingTask(void *pvParameters)
{
    int receivedValue;
    int filteredValue;

    while (1)
    {
        if (xQueueReceive(sensorQueue, &receivedValue, portMAX_DELAY) == pdTRUE)
        {
            filteredValue = receivedValue - 10;

            printf("[Processor] Filtered Value: %d\n", filteredValue);
        }
    }
}

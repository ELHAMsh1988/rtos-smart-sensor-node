#include "sensor.h"
#include <stdio.h>

static int simulateADC()
{
    static int value = 500;
    value += 3;
    if (value > 600) value = 500;
    return value;
}

void SensorTask(void *pvParameters)
{
    int sensorValue;

    while (1)
    {
        sensorValue = simulateADC();

        xQueueSend(sensorQueue, &sensorValue, portMAX_DELAY);

        printf("[Sensor] Raw Value: %d\n", sensorValue);

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

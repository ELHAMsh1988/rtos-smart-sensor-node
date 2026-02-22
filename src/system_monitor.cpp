#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>

void MonitorTask(void *pvParameters)
{
    while (1)
    {
        printf("[Monitor] All Tasks Running\n");

        vTaskDelay(pdMS_TO_TICKS(3000));
    }
}

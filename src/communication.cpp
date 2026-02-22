#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>

void CommunicationTask(void *pvParameters)
{
    while (1)
    {
        printf("[UART] Data Sent\n");

        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}

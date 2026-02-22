#ifndef SENSOR_H
#define SENSOR_H

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

extern QueueHandle_t sensorQueue;

void SensorTask(void *pvParameters);

#endif

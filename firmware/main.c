
#include "main.h"

#define LED_RED_GPIO_Port    GPIOA
#define LED_RED_Pin          GPIO_PIN_0

#define LED_GREEN_GPIO_Port  GPIOA
#define LED_GREEN_Pin        GPIO_PIN_1

#define LED_BLUE_GPIO_Port   GPIOA
#define LED_BLUE_Pin         GPIO_PIN_2

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    while (1)
    {

        HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
        HAL_Delay(500);


        HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
        HAL_Delay(500);


        HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, GPIO_PIN_SET);
        HAL_Delay(500);


        HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, GPIO_PIN_RESET);
        HAL_Delay(500);
    }
}

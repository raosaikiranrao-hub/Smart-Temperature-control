#include <stdio.h>

int main(void)
{
    int temperature;
    int fan_speed;

    printf("SMART TEMPERATURE CONTROLSYSTEM\n:");


    printf("Enter temperature in celsius: ");
    scanf("%d", &temperature);

    if (temperature < 30)
    {
       fan_speed=0;

    }
    else if(temperature < 40)
    {
        fan_speed=30;
    
    }
    else if(temperature < 50)
    {
        fan_speed=60;
    }
    else
    {
        fan_speed=100;
    
    }
    printf("fan speed is %d\n",fan_speed);
    printf("temperature is %d\n",temperature);
    if (fan_speed == 0)
    {
        printf("fan is off\n");
    }
    else
    {
        printf("fan is on\n");
    }
    if (temperature > 60)
    {
        printf("temperature is too high\n");

    }
    else if (temperature < 10)
    {
        printf("temperature is too low\n");

    }
    if (temperature >= 10 && temperature <=60)
    {
        printf("temperature is normal\n");
    
    }
    return 0;
}
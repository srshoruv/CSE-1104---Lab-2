#include <stdio.h>

int main()
{
    printf("Converting from Celcius to Fahrenheit.\n");
    printf("---------------------------------\n");

    float c, f;
    printf("Enter temperature in Calcius: ");

    if (!scanf("%f", &c)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    f = (c * 1.8) + 32;

    printf("%.2f°C is equal to %.2f°F \n", c,f);

    return 0;
}
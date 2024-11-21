#include <stdio.h>

int main()
{
    printf("Converting from Fahrenheit to Celcius.\n");
    printf("---------------------------------\n");

    float c, f;
    printf("Enter temperature in Fahrenheit: ");

    if (!scanf("%f", &f)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    c = (f - 32) * 0.55555555;

    printf("%.2f°F is equal to %.2f°C \n", f,c);

    return 0;
}
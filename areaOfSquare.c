#include <stdio.h>

int main()
{
    printf("Calculating the area of a square.\n");
    printf("---------------------------------\n");

    int x, area;
    printf("Enter length of one side: ");

    if (!scanf("%d", &x)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    area = x * x;
    printf("The area of the square is  %d \n", area);

    return 0;
}
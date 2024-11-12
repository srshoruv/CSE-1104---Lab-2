#include <stdio.h>

int main(){
    int r;
    float area, circum;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    area = 3.1416 * r * r;
    printf("The area of the circle is %.2f \n", area);

    circum = 2 * 3.1416 * r;
    printf("The circumference of the circle is %.2f \n", circum);

    return 0;


}
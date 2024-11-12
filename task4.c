#include <stdio.h>

int main(){
    float area, height, width;

    printf("Enter the height: ");
    scanf("%f", &height);

    printf("Enter the width: ");
    scanf("%f", &width);

    area = height * width;
    printf("The area of the Rectancle is: %.2f \n", area);

    return 0;
}
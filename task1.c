#include <stdio.h>

int main(){
    int a,b,sum,subs,mult;
    float div;

    printf("Enter the first numer: ");
    scanf("%d", &a);

    printf("Enter the second numer: ");
    scanf("%d", &b);

    sum = a+b;
    printf("%d + %d = %d \n", a,b,sum);

    subs = a-b;
    printf("%d - %d = %d \n", a,b,subs);
    
    div = (float) a / b;
    printf("%d / %d = %.2f \n", a,b,div);

    mult = a * b;
    printf("%d x %d = %d \n", a,b,mult);

    return 0;
}
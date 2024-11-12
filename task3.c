#include <stdio.h>

int main(){
    float cent, mete, kilo;

    printf("Enter the length(cm): ");
    scanf("%f", &cent);

    mete = cent / 100;
    printf("The length in meter is: %.2f \n", mete);

    kilo = cent / 1000;
    printf("The length in kilometer is: %.4f \n", kilo);
    
    return 0;

}
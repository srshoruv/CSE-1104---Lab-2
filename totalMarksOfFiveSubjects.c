#include <stdio.h>

int main()
{
    printf("Total Marks and Average of Five Subjects.\n");
    printf("----------------------------------------\n");

    float sub1, sub2, sub3, sub4, sub5,total,average;
    printf("Enter the Marks of Five Subjects: ");

    if (!scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;
    
    printf("Total marks is: %.2f\n", total);
    printf("Average is: %.2f\n", average);

    return 0;
}
/* Write a function that accepts pointers as parameters. Pass variables by reference 
using pointers and modify their values within the function. */

#include<stdio.h>

void modifyValues(int *a,float *b,char *c)
{
    printf("\nInside the function (Before modification):");
    printf("\nInteger: %d , Float: %.2f , Character: %c",*a,*b,*c);

    // Modifying the actual values using pointers
    *a = *a + 2;
    *b = *b * 2;
    *c = *c + 2;

    printf("\nInside the function (After modification):");
    printf("\nInteger: %d , Float: %.2f , Character: %c\n",*a,*b,*c);
}

int main() 
{
    int x;
    float y;
    char z;

    printf("Enter an integer value: ");
    scanf("%d",&x);
    printf("Enter a float value: ");
    scanf("%f",&y);
    printf("Enter a character: ");
    scanf(" %c",&z);

    printf("\nBefore function call:");
    printf("\nInteger: %d , Float: %.2f , Character: %c",x,y,z);

    modifyValues(&x, &y, &z);// function call 

    printf("After function call (Values modified):");
    printf("\nInteger: %d , Float: %.2f , Character: %c\n",x,y,z);

    return 0;
}

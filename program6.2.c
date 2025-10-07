/* Develop a recursive function GCD (num1, num2) that accepts two integer 
arguments. Write a C program that invokes this function to find the greatest 
common divisor of two given integers. */
#include <stdio.h>

int GCD(int num1,int num2) // create a funtion to find the GCD of two numbers 
{
    if (num2 == 0)
        return num1; 
    else
        return GCD(num2, num1%num2); 
}

int main() 
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);

    if(a < 0)// check whether the entered numbers are positive or negative 
    a = -a ; // if the entered number is negative , make it positive 
    if(b<0)
    b = -b ; 

    printf("The Greatest Common Divisor (GCD) is: %d\n",GCD(a, b));//call function GCD(a,b)

    return 0;
}

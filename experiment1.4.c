// Write a C program to add two numbers, take numbers from user.

#include<stdio.h> 
int main()
{
    int num1,num2,sum ; // variable declaration 

    printf("Enter first number : "); 
    scanf("%d",&num1); // to input the first number 

    printf("Enter second number : ");  
    scanf("%d",&num2); // to input the second number 

    sum=num1+num2 ; // sum calculation of two numbers stored in a variable named as "sum"

    printf("Sum of  %d and %d is %d ",num1,num2,sum); // output statement 

    return 0 ; 
}

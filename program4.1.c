/*Declare a global variable outside all functions and use it inside various functions to 
understand its accessibility.*/

#include<stdio.h>

// Global variable
int result = 0;

// Function for addition
int add(int a,int b) 
{
    result = a + b;   // using global variable
    printf("Addition: %d + %d = %d\n", a, b, result);
    return result ; 
}

// Function for subtraction
int subtract(int a, int b) 
{
    result = a - b;   // using global variable
    printf("Subtraction: %d - %d = %d\n", a, b, result);
    return result ; 
}

// Function for multiplication
int multiply(int a, int b) 
{
    result = a * b;   // using global variable
    printf("Multiplication: %d * %d = %d\n", a, b, result);
    return result ; 
}

int main() 
{
    int x = 10, y = 5;

    printf("Initial value of result (global variable): %d\n", result);

    add(x, y);
    subtract(x, y);
    multiply(x, y);

    printf("Final value of result: %d\n", result);

    return 0;
}

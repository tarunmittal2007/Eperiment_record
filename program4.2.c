/*Declare a local variable inside a function and try to access it outside the function. 
Compare this with accessing the global variable from within the function.*/

#include<stdio.h> 

// Global variable
int globalVar = 10;

// Function to calculate factorial
int factorial(int n) 
{
    int fact = 1;   // Local variable (accessible only inside this function)
    for (int i = 1; i <= n; i++) 
    {
        fact = fact*i;
    }

    // We can still access global variable inside this function
    printf("Inside factorial(): globalVar = %d\n", globalVar);

    return fact;  // returning local variable value
}

int main() 
{
    int num = 5;

    printf("In main(): globalVar = %d\n", globalVar);

    // Call factorial function
    int result = factorial(num);

    printf("Factorial of %d = %d\n", num, result);

    // Trying to access fact here will give ERROR , can check by uncommenting the line below 
    // printf("In main(): fact = %d\n", fact); 

    return 0;
}

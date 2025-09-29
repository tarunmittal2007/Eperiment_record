/*Declare a static local variable inside a function. Observe how its value persists 
across function calls.*/

#include<stdio.h>

// Function to calculate factorial using static variable
int factorial(int n) 
{
    static int callCount = 0; //intitialised only at ones 
    callCount++;

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("factorial(%d) = %d (Function called %d times)\n", n, fact, callCount);
    return fact;
}

int main() 
{
    factorial(3);  // 1st call
    factorial(5);  // 2nd call
    factorial(6);  // 3rd call
    return 0;
}

/*since static variable is initialised at ones , it will not initialise the vlaue of callcount in the 
second call of the function but only increase the value according to the code*/

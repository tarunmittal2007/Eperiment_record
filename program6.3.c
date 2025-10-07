/*Develop a recursive function FIBO (num) that accepts an integer argument. Write 
a C program that invokes this function to generate the Fibonacci sequence up to 
num. */
// 0,1,1,2,3,5,8,13,_ _ _ _ _

#include <stdio.h>

int FIBO(int num)// create a function to calculate the ith element of the fibonacci series where i is from 0 to n-1 
{
    if (num == 0)//first digit of the fibonacci series is 0 
    return 0;
    else if (num == 1)//second digit of the fibonacci series is 1 
    return 1;
    else
    return FIBO(num - 1) + FIBO(num - 2);//rest elements of the series is sum of previous two elements of that series 
}

int main() 
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("\nFibonacci sequence up to %d terms:\n",n);
    for (int i = 0 ; i < n ; i++) 
    {
        printf("%d,",FIBO(i));//print ith term of the fibonacci series seprated by (,)
    }

    printf("\n");
    return 0;
}

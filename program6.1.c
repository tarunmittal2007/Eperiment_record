/*Develop a recursive and non-recursive function FACT(num) to find the factorial of 
a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1).
Using this function, write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages. */

#include<stdio.h> 

    int fact_nonrecursion(int n) //function to calculate the factorial without recursion 
    {
        int fact=1 ; 
        for(int i=1 ; i<=n ; i++)
        fact = fact*i; 
        return fact; 
    }

    int fact_recursion(int n) //function to calculate the factorial with recursion 
    {
        if(n==0)
        return 1 ; 
        else 
        return n*fact_recursion(n-1) ; // n! can be written as n*(n-1)!
    }

    int main()
    {

        int n ; 
        printf("enter the value of n : \n"); 
        scanf("%d",&n); 

    printf("factorial without recurssion : %d\n",fact_nonrecursion(n)); 
    printf("factorial with recursion : %d\n",fact_recursion(n));  

    return 0 ; 
    }

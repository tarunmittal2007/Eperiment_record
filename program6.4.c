/*Develop a C function ISPRIME (num) that accepts an integer argument and 
returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes 
this function to generate prime numbers between the given ranges.  */

#include<stdio.h> 

int ISPRIME(int num)// create a function to check if the number is prime or not 
{
    int i , factors = 0 ;
    for(i=2 ; i<num ; i++)// count the number of factors of the number other than 1 and the number itself 
    {
        if(num%i == 0)
        factors++ ; 
    }

    if(factors==0)//funtion returns 1 if number is prime otherwise 0 
    return 1 ; 
    else 
    return 0 ; 
}

int main()
{
    int lower , upper ; 
    printf("Enter the lower and the upper limit : "); // input range for checking the prime numbers inbetween 
    scanf("%d%d",&lower,&upper); 

    printf("All the prime numbers in the range of %d to %d is : \n",lower,upper); 
    for(int n = lower ; n<= upper ; n++)
    {
    if(ISPRIME(n))// call the funtion in the if condition i.e. it will print the number when the funtion returns 1
    printf("%d ",n);
    }

    return 0 ; 
}

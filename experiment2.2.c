// WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

#include<stdio.h>

int main()
{
    float celsius , fahrenheit ; 

// take temperature in celsius as input 
    printf("Enter the temperature in celsius : \n"); 
    scanf("%f",&celsius); 

// calculate temperature in fahrenheit as input 
    fahrenheit = (celsius * 1.8) + 32 ; 

// output statement 
    printf("Temperature in fahrenheit is : %f",fahrenheit); 

    return 0 ; 
}

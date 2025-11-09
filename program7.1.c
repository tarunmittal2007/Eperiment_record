/*
1. Write a C program that uses functions to perform the following operations:  
a. Reading a complex number.  
b. Writing a complex number.  
c. Addition and subtraction of two complex numbers  
Note: represent complex number using a structure. 
*/

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function prototypes
struct Complex readComplex();
void writeComplex(struct Complex c);
struct Complex addComplex(struct Complex c1, struct Complex c2);
struct Complex subComplex(struct Complex c1, struct Complex c2);

int main() 
{
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();
    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\nFirst Complex Number: ");
    writeComplex(c1);
    printf("\nSecond Complex Number: ");
    writeComplex(c2);
    printf("\nSum: ");
    writeComplex(sum);
    printf("\nDifference: ");
    writeComplex(diff);

    return 0;
}

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to print the complex number
void writeComplex(struct Complex c) 
{
    printf("%.2f + %.2fi", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subComplex(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

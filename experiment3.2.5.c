/*Ramanujan Number is the smallest number that can be expressed as the sum of 
two cubes in two different ways. WAP to print all such numbers up to a 
reasonable limit. 
Example of Ramanujan number: 1729 
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)*/

#include <stdio.h>

int main() 
{
int n, a, b, c, d, count = 0;
printf("Enter a number: ");
scanf("%d", &n);

// check all pairs of cubes
for(a = 1; a * a * a < n; a++) 
{
for(b = a; b * b * b < n; b++) 
{  // start from a to avoid duplicates
if(a * a * a + b * b * b == n) 
{
count++;
printf("Found pair: %d^3 + %d^3 = %d\n", a, b, n);
}
}
}

if(count >= 2) 
{
printf("%d is a Ramanujan number.\n", n);
}
else 
{
printf("%d is NOT a Ramanujan number.\n", n);
}

return 0;
}

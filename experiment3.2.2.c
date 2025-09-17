/*WAP to print the multiplication table of the number entered by the user. It should 
be in the correct formatting.   Num * 1 = Num  */

#include<stdio.h>

int main()
{
int n , i ; 

printf("Enter the number : "); 
scanf("%d",&n); 

printf("Multiplication table of %d is \n",n);

for(i=1 ; i<=10 ; i++)
{
int multiplication = n*i ; 
printf("%d * %d = %d\n",n,i,multiplication); 
}

return 0 ; 
}

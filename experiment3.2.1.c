/* WAP to enter numbers till the user wants. At the end, it should display the count
of positive, negative, and Zeroes entered.*/

#include<stdio.h>

int main()
{
int n , i , num , positive=0 , negative=0 , zeros=0 ;

printf("Enter the number of numbers you want to enter\n"); 
scanf("%d",&n); 

printf("Enter the numbers\n"); 
for(i=1 ; i<=n ; i++)
{
// take input of n numbers from user using the loop 
scanf("%d",&num);
// check whether the entered number is positive , negative or zero 
if(num>0)
positive++ ; 
else if(num<0)
negative++ ; 
else 
zeros++ ;
}

printf("Number of positive , negative and  zeros in the entered numbers\n"); 
printf("positive : %d\n",positive); 
printf("Negative : %d\n",negative); 
printf("Zeros : %d\n",zeros); 

return 0 ; 

}

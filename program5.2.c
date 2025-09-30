/*WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to count and display positive, negative, odd, and even numbers in an array.*/

#include<Stdio.h>

int main()
{
    int n , i ; 
    printf("Enter the length of the array : "); // input the length of the array 
    scanf("%d",&n); 

    int arr[n]; // declare a variable for n values and input the values 
    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)//loop form 0 to less than n as indexing of array is from 0 to n-1 
    scanf("%d",&arr[i]); 

    int positive=0 , negative=0 , even=0 , odd=0 , zero=0 ; // initialise all with zero 
    // check whether the number is positive , negative , zero , even , odd 
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]>0)
        positive++ ; 
        else if(arr[i]<0)
        negative++ ; 
        else 
        zero++ ; 

        if(arr[i]%2 == 0)
        even++ ; 
        else 
        odd++ ; 
    }
// output 
printf("\nPositive : %d",positive); 
printf("\nNegative : %d",negative); 
printf("\nZeros    : %d",zero); 
printf("\nEven     : %d",even); 
printf("\nOdd      : %d",odd); 

return 0 ; 
}

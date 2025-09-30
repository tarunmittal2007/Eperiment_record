/*WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to find the frequency of a particular number in a list of integers. */

#include<stdio.h> 

int main()
{
    int n , i , num , count=0 ;// let initially frequency be zero 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int arr[n]; // array declaration 

    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)// input values to array 
    scanf("%d",&arr[i]); 

    printf("Enter the number whose frequency you want to count : "); 
    scanf("%d",&num); // input a number from the user 

    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==num)// check for every value of the array ,if it is  equal to number entered or not 
        count++ ; //if yes , increase its frequency  by 1 
    }

    printf("Frequency of %d in the array is %d . ",num,count);
    return 0 ; 
}

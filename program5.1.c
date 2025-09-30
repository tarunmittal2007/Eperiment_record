/*WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to print the second largest integer in a list of integers.*/

#include<Stdio.h>

int main()
{
    int n , i ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int arr[n]; 
    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)
    scanf("%d",&arr[i]); 

    int max = arr[0]; // let the first element of the array be the largest number 
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]>max)// if any other number of the array is greater then the max , update the maxinmum number 
        max = arr[i];
    }

int second = arr[0] ; // let the second largest number equal to the first number 
for(i=0 ; i<n ; i++)
{
if(arr[i]<max)// condition will be checked for all the numbers less than maximum number 
{
    if(arr[i]>second)// check numbers of the array for the second largest number if yes update value of second 
    {
        second = arr[i]; 
    }
}
}

printf("Second largest number in the array is : %d",second); 
return 0 ; 

}

/*Develop a function REVERSE (str) that accepts a string argument. Write a C 
program that invokes this function to find the reverse of a given string. */

#include<stdio.h> 
#include<string.h>//contains strlen() function which is used to calculate the length of the string 

void REVERSE(char str[1000])//create a funtion to reverse the string 
{
int len = strlen(str);// length of the entered string 
printf("The  reverse of the entered string is : \n"); 
for(int i = 0 ; i<len ; i++)
{
if(str[i]!='\0')//marks the end of the string 
{
    char ch = str[len-1-i]; //replace i from last i.e. len-1-i with i from start in the string and print it 
    printf("%c",ch);
}
}
}

int main()
{
char str[1000]; 
printf("Enter the text : \n"); 
gets(str); // funtion to take input of the string 

REVERSE(str); // call the REVERSE() funtion to print reverse of the string 

return 0 ; 
}

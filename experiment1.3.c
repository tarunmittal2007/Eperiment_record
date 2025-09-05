// Write a program that prompts the user to enter their name and age.

#include<stdio.h> 
int main()
{
    char name[20]; // array to store name upto 20 caharcters 
    int age ; 

    printf("Enter your name: ");
    scanf("%s", &name);// to input name of the user 
                    // array reads a single word (no spaces)
    printf("Enter your age: ");
    scanf("%d", &age);// to input the age of the user 

    printf("Hello %s , you are %d years old.\n",name,age);

    return 0;
}

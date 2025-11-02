/* Declare different types of pointers (int, float, char) and initialize them with the 
addresses of variables. Print the values of both the pointers and the variables they 
point to. */ 
 
#include<stdio.h> 

int main()
{
    int a ; 
    float b ; 
    char ch ; 

    printf("Enter an integer : "); 
    scanf("%d",&a); 
    printf("Enter a float values : "); 
    scanf("%f",&b); 
    printf("Enter a character : "); 
    scanf("%s",&ch); 
    
    int *ptr1 = &a ;  
    float *ptr2 = &b ; 
    char *ptr3 = &ch ; 

    printf("adresses of the three declared variables are : %d , %d , %d\n",ptr1,ptr2,ptr3); 
    printf("values stored in the variables is : %d , %f , %c",*ptr1,*ptr2,*ptr3); 

    return 0 ;
}

/*Perform pointer arithmetic (increment and decrement) on pointers of different data 
types. Observe how the memory addresses change and the effects on data 
access. */

#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;

    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter a float: ");
    scanf("%f",&b);
    printf("Enter a character: ");
    scanf(" %c",&c);

    int *iptr = &a;
    float *fptr = &b;
    char *cptr = &c;

    // Displaying initial addresses and values of the pointers 
    printf("--- Initial Addresses and Values ---");
    printf("\nInteger pointer: %p , Value: %d", iptr , *iptr);
    printf("\nFloat pointer  : %p , Value: %.2f", fptr , *fptr);
    printf("\nChar pointer   : %p , Value: %c\n", cptr , *cptr);

    // Incrementing pointers (for address observations)
    iptr++;
    fptr++;
    cptr++;

    printf("\n--- After Increment (Address Changed and random values are stored at these adresses) ---");
    printf("\nInteger pointer: %p , value: %d",iptr,*iptr);
    printf("\nFloat pointer  : %p , value: %f",fptr,*fptr);
    printf("\nChar pointer   : %p , value: %c \n",cptr,*cptr);

    // Decrementing pointers (back to initial valid addresses)
    iptr--;
    fptr--;
    cptr--;

    printf("\n--- After Decrement (Back to Original) ---");
    printf("\nInteger pointer: %p , Value: %d",iptr, *iptr);
    printf("\nFloat pointer  : %p , Value: %.2f",fptr, *fptr);
    printf("\nChar pointer   : %p , Value: %c\n",cptr, *cptr);

    return 0;
}

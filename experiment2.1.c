// WAP a C program to calculate the area and perimeter of a rectangle based on its length and width 

#include<stdio.h> 

int main()
{
    float length , width , area , perimeter ;

    printf("Enter length : \n");
    scanf("%f",&length); 
    
    printf("Enter width : \n");
    scanf("%f",&width); 

    perimeter = 2*(length+width) ;// it will calculate perimeter of triangle 
    area = length*width ;// it will calculate area of triangle 

    // output statements 
    printf("Area of the rectangle is : %f \n",area); 
    printf("Perimeter of the rectangle : %f \n",perimeter);

    return 0 ; 
}

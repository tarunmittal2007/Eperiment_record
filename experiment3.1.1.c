/*WAP to take check if the triangle is valid or not. If the validity is established, do 
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of 
the triangle as input from a user.*/

#include<stdio.h>

int main()
{
    float a,b,c; 
    printf("Enter three sides of the tringle \n");
    scanf("%f%f%f",&a,&b,&c);

    //check whether the triangle exists or not as it is possible if the sum of any two sides is greater then the third side 
    if(a+b>=c && b+c>=a && a+c>=b)
    {
    if(a==b && b==c && c==a) // all sides are equal for equilateral triangle 
    printf("triangle is equilateral");
    else if(((a==b)&&b!=c) || ((b==c)&&b!=a) || ((c==a)&&c!=b)) // two sides are equal for isosceles triangle 
    printf("triangle is isosceles");
    else                      // if all sides are different , it is a scalene triangle
    printf("tiangle is scalene"); 
    }
    
    else 
    {
    printf("not a valid triangle");
    }

    return 0 ; 
}

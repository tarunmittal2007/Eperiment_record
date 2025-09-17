// WAP to check if three points (x1,y1) , (x2,y2) and (x3,y3) are collinear or not. 

#include<stdio.h>

int main()
{
    int x1,x2,x3,y1,y2,y3 ; 

    printf("enter the coordinates of first point x1,y1 \n") ;
    scanf("%d%d",&x1,&y1);

    printf("enter the coordinates of second point x2,y2 \n") ;
    scanf("%d%d",&x2,&y2);

    printf("enter the coordinates of third point x3,y3 \n") ;
    scanf("%d%d",&x3,&y3);

    // Check the area of the triangle using these coordinates 
    float area = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)) ;  

    // area for the colinear points is zero 
    if(area==0)
    printf("all the points are colinear"); 
    else 
    printf("all the points are not colinear"); 

    return 0 ; 
}

/*WAP to compute the BMI Index of the person and print the BMI values as per the 
following ranges. You can use the following formula to compute BMI= 
weight(kgs)/Height(Mts)*Height(Mts).*/

#include<stdio.h> 
int main()
{
    float weight , height ;

    printf("Enter your weight in kgs : "); 
    scanf("%f",&weight); 

    printf("Enter your height in meters : "); 
    scanf("%f",&height);

    // calculation of BMI from the entered details 
    float BMI = weight/(height*height); 

    printf("BMI index of the person is %.2f \n",BMI);  
    printf("BMI category : "); 
    
    // checking the category of the BMI
    if(BMI>40)
    printf("Morbidity Obese"); 
    else if(BMI>=30 && BMI<40)
    printf("Obese"); 
    else if(BMI>=25 && BMI<30) 
    printf("Overweight");
    else if(BMI>=18.5 && BMI<25)
    printf("Ideal"); 
    else if(BMI>=17.5 && BMI<18.5)
    printf("Underweight"); 
    else if(BMI>=15 && BMI<17.5)
    printf("Anorexic");
    else
    printf("Starvation"); 

    return 0 ; 
}

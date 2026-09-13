#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter weight in kg and height in m: ");
    scanf("%f %f", &weight, &height);
    if(weight <= 0) 
    {
        printf("Invalid weight.\n");
    }
   else if(height <= 0) 
    {
        printf("Invalid height.\n");
    }
    else 
    {
        bmi = weight / (height * height);
        printf("BMI: %.2f\n", bmi); 

}
if (bmi < 18.5) 
    {
        printf("Underweight\n");
    } 
    else if (bmi >= 18.5 && bmi < 24.9) 
    {
        printf("Normal weight\n");
    } 
    else if (bmi >= 25 && bmi < 29.9) 
    {
        printf("Overweight\n");
    } 
    else 
    {
        printf("Obesity\n");
    }
return 0;
}
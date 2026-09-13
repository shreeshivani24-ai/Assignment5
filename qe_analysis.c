#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    float r1, r2;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        printf("It is not a quadratic equation.\n");
    }
    else
    {
       d = b * b - 4 * a * c;
       printf("Discriminant = %.2f\n", d);
    }
     
         if (d > 0)
       {
        printf("Roots are real and different \n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
     }
     else
     {
             if (d == 0)
     {
        printf("Roots are real and same \n");
        r1 = r2 = -b / (2 * a);
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
     }
     else
     {
        printf("Roots are imaginary \n");
     }
     }
     
     return 0;
     }

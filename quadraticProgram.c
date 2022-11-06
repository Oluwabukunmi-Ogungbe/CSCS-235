

//Program to solve a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2;

    printf("Enter values for a, b and c : \n");
    scanf("%f %f %f", &a, &b, &c);

    if ((((b * b) - (4 * a * c)) < 0)){

       printf(" No roots because discriminant is negative \n") ;
                     }

    root1 = ((-1 * b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = ((-1 * b) - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("The first root = %f \n" , root1);
    printf("The second root = %f \n" , root2);
}
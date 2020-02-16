#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    /* float num1,num2,sqrt1,num,cbrt1;
    printf("Arithmetic Operations \n");
    printf("Enter first number\n");
    scanf(" %f", &num1);
    printf("Enter second number\n");
    scanf(" %f", &num2);
    printf("Addition = %.1f\n", num1+num2);
    printf("Subtraction = %.1f\n", num1-num2);
    printf("Division = %.1f\n", num1/num2);
    printf("Multiplication = %.1f\n", num1*num2);

    printf("Cube Root Operation\n");
    printf("Enter the number\n");

    scanf("%f", &num);
    cbrt1 = cbrt(num);
    printf("Cube root of %.1f is \n%.1f\n", num, cbrt1);

    scanf("%f", &num);
    sqrt1 = sqrt(num);
    printf("\n Square  root of %.1f is \n%.1f", num, sqrt1); */

       /*float i,j,k;

       scanf("%f", &i);
       scanf("%f", &j);
       scanf("%f", &k);

       float sin_value = sin(i);
       float cos_value = cos(i);
       float tan_value = tan(i);
       float sinh_value = sinh(j);
       float cosh_value = cosh(j);
       float tanh_value = tanh(j);
       float log_value = log(k);
       float log10_value = log10(k);
       float exp_value = exp(k);

       printf("The value of sin(%f) : %f \n", i, sin_value);
       printf("The value of cos(%f) : %f \n", i, cos_value);
       printf("The value of tan(%f) : %f \n", i, tan_value);
       printf("The value of sinh(%f) : %f \n", j, sinh_value);
       printf("The value of cosh(%f) : %f \n", j, cosh_value);
       printf("The value of tanh(%f) : %f \n", j, tanh_value);
       printf("The value of log(%f) : %f \n", k, log_value);
       printf("The value of log10(%f) : %f \n",k,log10_value);
       printf("The value of exp(%f) : %f \n",k, exp_value);*/

       float value, result;

       scanf("%f", &value);
       result = acos(value);
       printf("Inverse of cos(%f) = %f", value, result);

       scanf("%f", &value);
       result = asin(value);
       printf("Inverse of sin(%f) = %f", value, result);

       scanf("%f", &value);
       result = atan(value);
       printf("Inverse of tan(%f) = %f", value, result);


    getch();
}

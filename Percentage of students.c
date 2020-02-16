#include <stdio.h>
#include <conio.h>

void main()
{

    float a,b,c,d,e,perc;
    printf("Enter your marks for \nENGLISH\n");
    scanf(" %f", &a);
    printf("MATHS\n");
    scanf(" %f", &b);
    printf("PHYSICS\n");
    scanf(" %f", &c);
    printf("ISLAMIAT\n");
    scanf("  %f", &d);
    printf("COMPUTER\n");
    scanf("  %f", &e);
    perc = a+b+c+d+e;
    printf("your Percentage is \n %.1f", perc/500*100);




    getch();
}

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j;
    char CH='E';
    int space=1;

    for(i=1; i<=5; i++)
    {
        for(j='A'; j<=CH; j++)
            printf("%c",j);

        if(i==1)
            printf("\b");

        for(j=1; j<space; j++)
            printf("  ");

        for(j=CH; j>='A'; j--)
            printf("%c",j);

        printf("\n");
        CH--;
        space++;
    }

    return 0;
}

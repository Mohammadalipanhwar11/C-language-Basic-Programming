#include <stdio.h>
#include <conio.h>

int main(){


int i,j,space=9,i1,j1,space1=0;

for(i=1; i<=9; i++){
    //space = i;
    for(j=1; j<space; j++){
        printf("", j);
    }
    for(j=1; j<=i; j++){
        printf("%d ",j);
    }

    printf("\n", i);
    space--;

}
for(i1=9; i1>=0; i1--){
    //space = i;
    for(j1=0; j1<space1; j1++){
        printf("");
    }
    for(j1=1; j1<=i1; j1++){
        printf("%d ",j1);
    }
    printf("\n", i1);
    space1++;

}



return 0;
}


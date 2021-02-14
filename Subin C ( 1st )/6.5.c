#include<stdio.h>

int main()
{
    int ara[] ={10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for (i=0,j=9; i<10; i++,j--){
        ara2[i]=ara[j];
    }

    for (i=0; i<10; i++){
        printf("%d\n", ara2[i]);
    }
    printf("%d\n", ara[1]);
    printf("%d\n", ara2[1]);
    return 0;
}

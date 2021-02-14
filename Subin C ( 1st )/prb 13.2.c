#include<stdio.h>

int main()
{
    int i,j,k,x;
    for(i=10; i>=0; i=i-2){
        printf("\n");
        for(j=i+2; j<=10; j=j+2){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("c");
        }

    }

    for(i=10; i>=2; i=i-2){


        printf("\n");
        for(x=4; x<=i; x=x+2){
                printf(" ");
        }

        for(k=i-2; k<=10; k++){
            printf("c");
        }


    }

    printf("\n\n\n");
    return 0;
}

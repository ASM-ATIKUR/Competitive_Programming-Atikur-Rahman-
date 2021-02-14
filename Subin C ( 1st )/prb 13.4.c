#include<stdio.h>

int main()
{
    int i,j,k,l;
    for(i=0; i<=9; i++){
        for(j=0; j<=i; j++){
            printf("c");
        }
        for(l=0; l<=17-(2*i); l++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("c");
        }
        printf("\n");

    }
    for(i=8; i>=0; i--){
        for(j=0; j<=i; j++){
            printf("c");
        }
        for(l=0; l<=1; l++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("c");
        }
        printf("\n");

    }

    return 0;
}

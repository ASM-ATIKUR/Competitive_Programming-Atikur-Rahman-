#include<stdio.h>

int main()
{
    int i,j, k;
    for(i=6; i>=0; i--){
        for(k=i; k<=5; k++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("c");
        }
        printf("\n");
    }

    for(i=5; i>=0; i--){
        for(j=0; j<=i-1; j++){
            printf(" ");
        }
        for(k=i; k<=6; k++){
            printf("c");
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int i,j,x;

        for(x=6; x>0; x--){
            printf("\n");
            for(j=0; j<=x; j++){
                printf("c");
            }
        }
        while(x<=6){
                printf("\n");
            for(j=x; j>=0; j--){
                printf("c");
            }

            x++;
        }

    return 0;
}

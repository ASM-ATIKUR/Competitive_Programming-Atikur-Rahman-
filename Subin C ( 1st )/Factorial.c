#include<stdio.h>

int main()
{
    int n, i;
    printf("The value of n: ");
    scanf("%d", &n);


    if (n==0){
            printf("\n The Value of N factorial: 1 \n\n");
    }
    else{
        for(i=n-1;i>0; i--){
        n=n*i;
        }

    printf("\n The value of N factorial: %d \n\n", n);
    }
    return 0;
}

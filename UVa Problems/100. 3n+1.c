#include<stdio.h>

int main()
{
    int n, count=1;
    scanf("%d", &n);

    while(n!=1){

        if(n%2==0){
            n=n/2;
        }
        else if(n%2==1){
            n=3*n+1;
        }
    count++;
    }
    printf("%d\n", count);
    return 0;
}

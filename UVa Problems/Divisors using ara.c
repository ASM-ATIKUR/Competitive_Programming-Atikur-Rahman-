#include<stdio.h>

int main()
{
    int a=0,i,m, n, k, x, j, c, d, e, f;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &m, &n, &k);

    for(i=m, x=0; i>=m&&i<=n; i++){
        if(i%k==0){
            x=x+1;
        }
    }
    int ara[x];

    for(i=m; i>=m&&i<=n; i++){
        if(i%k==0){
            ara[a]=i;
            a=a+1;
        }
    }



    for(j=0, e=0, f=0; j<a; j++){
        for(i=1, c=0, d=0; i<=ara[j]; i++){
            if(ara[j]%i==0){
                c=c+i;
                d=d+1;

            }
        }
        e=e+d;
        f=f+c;
    }
    printf("%d %d", e, f);
    return 0;
}

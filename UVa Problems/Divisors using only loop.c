#include<stdio.h>

int main()
{
    int m, n, x, i, j, k, c, d, e, f;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &m, &n, &x);

    for(i=m, e=0, f=0; i>=m&&i<=n; i++){
        if(i%x==0){
            for(k=1, c=0, d=0; k<=i; k++){
                if(i%k==0){
                    c=c+k;
                    d=d+1;
                }
            }
            e=e+d;
            f=f+c;
        }

    }
    printf("%d %d", e, f);
    return 0;
}

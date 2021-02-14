#include<stdio.h>

int main()
{
    int ara[11][10]= {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    int i, j, x, a, b, c=1, n=10;
    for(a=1; a<=n ; a++){
        for(b=0; b<10; b++){
            ara[a][b]= c;
        }
        c++;
    }

    for(i=1; i<=n; i++){
        for(j=0; j<10; j++){
            x = ara[i][j] * ara[0][j];

            printf("%d * %d = %d\n", ara[i][j], ara[0][j], x);
        }
        printf("\n\n");
    }
    return 0;
}


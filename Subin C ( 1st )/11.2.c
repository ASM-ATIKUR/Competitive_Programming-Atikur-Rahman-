#include<stdio.h>

int main()
{
    int ara[11][10]= {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, {3, 3, 3, 3, 3, 3, 3, 3, 3, 3}};
    int i, j, x;

    for(i=1; i<3; i++){
        for(j=0; j<10; j++){
            x = ara[i][j] * ara[0][j];

            printf("%d * %d = %d\n", ara[i][j], ara[0][j], x);
        }
        printf("\n\n");
    }
    return 0;
}

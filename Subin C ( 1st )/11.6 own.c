#include<stdio.h>

int main()
{
    int table[5][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}, {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000, 40000, 50000}};
    int ntable[5][5];
    int row, row1, col, col1;

    for(row=0, col1=0; row<5; row++, col1++){
        for(col=0, row1=0; col<5; col++, row1++){
            ntable[row1][col1] = table[row][col];
        }
    }

    for(row=0; row< 5; row++){
        for(col=0; col<5; col++){
            printf("%d  ", table[row][col]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    for(row=0; row< 5; row++){
        for(col=0; col<5; col++){
            printf("%d  ", ntable[row][col]);
        }
        printf("\n");
    }
}

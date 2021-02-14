#include <stdio.h>

int main()
{
    int namta[10][10];

    int row, col, a=0, b=0, sum=0;

    for(row=0; row<10; row++){
        for(col=0; col< 10; col++){
            namta[row][col] = (row +1) * (col +1);
        }
    }

    for(row=0; row< 10; row++){
        for(col=0; col< 10; col++){
                if(namta[row][col]%2==0){
                    a=a+1;
                }
                else{
                    b=b+1;
                }
                sum = sum+ namta[row][col];
            printf("%d * %d = %d\n", row+1, col+1, namta[row][col]);
        }
        printf("\n");
    }

    printf("The number of even number: %d \nThe number of odd number: %d \n\n Summation of all number of the array : %d\n", a, b, sum);


    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    char saarc[7][25] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives" };

    int row, col, name_length;
    for(row = 0; row<7; row++){
        name_length = strlen(saarc[row]);
        for(col=0; col< name_length; col++){
            printf("%c \n", saarc[row][col]);
        }
        printf("\n\n");
    }
    return 0;
}


#include<stdio.h>

int main()
{
    int marks[4][10]={{80, 95, 87, 98, 78, 57, 47, 78, 89, 78}, {78, 98 , 90, 78, 96, 91, 57 , 68, 98, 78},
                       {89, 98, 98 ,78, 90, 69, 65, 87, 90, 89}, {78, 98, 97, 78, 86, 56, 74, 73, 86, 97}
                       ,{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    int col;

    for(col=0; col<10; col++){
        marks[3][col]= marks[0][col] /4.0 + marks[1][col]/2.0 + marks[2][col]/2.0 ;

        printf("Roll %d , Total marks: %d \n" , col+1, marks[3][col]);
    }

    return 0;
}

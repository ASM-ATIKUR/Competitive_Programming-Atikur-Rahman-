#include<stdio.h>

int main()
{
    int ara[9] ={1,2,3,4,5,6,7,8,9};
    int i;
    for(i=8; i>=0;i--){
            if(i==0){
                printf("1st element is %d \n" , ara[i] );
            }
            else {
                printf("%dth element is %d \n" ,i+1 , ara[i] );
            }
    }

}

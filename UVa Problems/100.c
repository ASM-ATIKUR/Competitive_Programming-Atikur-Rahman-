#include<stdio.h>

int main()
{
    int a,b,x=1,x1=1;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d ", a);

   while(a>1){

        if(a%2==0){
            a=a/2;
        }
        else {
            a=3*a+1;
        }
        x1=x1+1;
        printf("%d ", a);
        }
            printf("\n\n %d \n\n",x1);



    printf("%d ", b);

    while(b>1){

        if(b%2==0){
            b=b/2;
        }
        else {
            b=3*b+1;
        }
        x=x+1;
        printf("%d ", b);
        }
            printf("\n\n %d \n\n ",x);

            if(x>x1){
                printf("The maximum life cycle: %d",x);
            }
            else{
                printf("The maximum life cycle: %d", x1);
            }

    return 0;
}

#include<stdio.h>

void test_function(int ara[], int n)
{
    ara[0]= 100;
    n= 10;
    return;
}
int main()
{
    int n=5;
    int ara[]={1,2,3,4,5};
    printf("%d\n", n);
    printf("%d\n", ara[0]);

    test_function(ara, n);

    printf("%d\n", n);
    printf("%d\n", ara[0]);

    return 0;

}


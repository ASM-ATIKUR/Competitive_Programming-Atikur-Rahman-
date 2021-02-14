#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, a;
    double x;
    double ara1[1];
    printf("%d\n", ara1);
    int ara[1];
    printf("%d\n", ara);
    char b[1], d;
    printf("%d", b);
    scanf("%d", &n);
    printf("%d\n", b);

    while(n>0)
    {
        for(i=0,a=strlen(b)-1;i<strlen(b)&&a>=0;i++,a--)
            {
                b[a+1]=b[a];
            }
        b[0]=n%2+'0';

        n=n/2;




    }
    int y= d;



    printf("%s\n\n", b);
    printf("%d", y);
    return 0;
}

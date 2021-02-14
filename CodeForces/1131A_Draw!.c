#include <stdio.h>

int max(int a, int b);
int min(int a, int b);
int main(void)
{
    int n, a=0, b=0, total=1, ab=0, bb=0, flag=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);

        if(flag==0)
        {
            total+=(min(a,b)-ab);
        }
        else if(flag==1)
        {
            if(ab<b)
            {
                total+=(b-ab);
            }
        }
        else
        {
            if(bb<a)
            {
                total+=(a-bb);
            }
        }
        printf("%d\n", total);
        ab=a;
        bb=b;
        if(a>b) flag=1;
        else if(a<b) flag=-1;
        else flag=0;
    }
    printf("%d\n", total);

    return 0;

}

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int min(int a, int b)
{
    if(a<b) return a;
    else return b;
}

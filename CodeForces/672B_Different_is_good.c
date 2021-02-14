#include <stdio.h>

int main(void)
{
    int n, i, count=0;
    char check[30];

    for(i=0; i<30; i++)
        check[i]=0;

    scanf("%d", &n);
    char str[n+10];
    scanf("%s", str);

    if(n>26)
    {
        count=-1;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(check[str[i]-'a'])
                count++;
            else
                check[str[i]-'a']=1;
        }
    }
    printf("%d\n", count);

    return 0;
}

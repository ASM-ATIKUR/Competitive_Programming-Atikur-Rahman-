#include <stdio.h>

int main()
{
    int n, a, i, c=0, r=0, s=0;
    char ch;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d %c", &a, &ch);
        if(ch=='C')
        {
            c+=a;
        }
        else if(ch=='R')
        {
            r+=a;
        }
        else if (ch=='S')
        {
            s+=a;
        }
    }
    printf("Total: %d cobaias\n", c+s+r);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)(c*100)/(c+s+r));
    printf("Percentual de ratos: %.2f %%\n", (float)(r*100)/(c+s+r));
    printf("Percentual de sapos: %.2f %%\n", (float)(s*100)/(c+s+r));


    return 0;

}

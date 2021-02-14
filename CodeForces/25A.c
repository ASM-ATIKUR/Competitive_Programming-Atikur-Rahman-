#include <stdio.h>

int main()
{
    int n, x, i, even=0, odd=0, anse, anso;
    scanf(" %d", &n);
    int ara[105]={0};
    for(i=1; i<=n; i++)
    {
        scanf(" %d", &x);
        if(x%2==0)
        {
            even++;
            anse=i;
        }
        else {
            odd++;
            anso=i;
        }
    }
    if(even>1)
    {
        printf("%d\n", anso);
    }
    else printf("%d\n", anse);

    return 0;
}

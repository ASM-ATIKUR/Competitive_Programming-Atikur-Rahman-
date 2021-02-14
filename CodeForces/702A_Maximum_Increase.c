#include <stdio.h>

int main()
{
    int n, i, max=0, cnt=0, trac=0, x;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        if(x>trac)
        {
            cnt++;
        }
        else
        {
            if(max<cnt) max=cnt;
            cnt=1;
        }
        trac=x;
    }
    if(max<cnt) max=cnt;
    printf("%d\n", max);

    return 0;
}

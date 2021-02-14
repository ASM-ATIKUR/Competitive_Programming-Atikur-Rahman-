#include <stdio.h>

int main()
{
    int n, i, t, a=21, ans, count=0;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d", &t);

        count++;
        if(t<a)
        {
            a=t;
            ans = count;

        }

    }
    printf("%d\n", ans);

    return 0;
}

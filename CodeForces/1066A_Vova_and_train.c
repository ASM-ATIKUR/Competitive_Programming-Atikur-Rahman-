#include <stdio.h>

int main()
{
    int t, L, v, l, r;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &L, &v, &l, &r);
        l=(r/v)-((l-1)/v);
        L=L/v;
        printf("%d\n", L-l);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n, m, i, a, b, mid;

    scanf(" %d %d", &n, &m);
    int pair[1005]={0};
    int x=m;
    while(m-->0)
    {
        scanf(" %d %d", &a, &b);
        pair[a]=1;
        pair[b]=1;
    }
    for(i=1; i<=n; i++)
    {
        if(pair[i]==0){
                mid=i;
            break;
        }
    }
    printf("%d\n", n-1);
    for(i=1; i<=n; i++)
    {
        if(i!=mid) printf("%d %d\n", i, mid);
    }
    return 0;
}

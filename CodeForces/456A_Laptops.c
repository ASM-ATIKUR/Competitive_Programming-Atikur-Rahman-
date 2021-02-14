#include <stdio.h>

int main()
{
    int n, a, b, flag=0, ba=0, bb=0;
    scanf("%d", &n);
    scanf("%d %d", &ba, &bb);
    while(--n)
    {
        scanf("%d %d", &a, &b);
        if((a<=ba) || (b>=bb))
        {
            flag=1;
        }
        ba=a;
        bb=b;
    }
    if(flag) printf("Poor Alex\n");
    else printf("Happy Alex\n");

    return 0;
}

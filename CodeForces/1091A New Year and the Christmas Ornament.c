#include <stdio.h>

int main(void)
{
    int y, b, r, ans;
    scanf("%d %d %d", &y, &b, &r);

    for(; y>0; y--)
    {
        if(b>y && r>y+1)
        {
            ans= y*3 + 3;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}

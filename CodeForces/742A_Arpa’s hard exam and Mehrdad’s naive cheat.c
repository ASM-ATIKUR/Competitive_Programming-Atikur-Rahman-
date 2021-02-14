#include <stdio.h>

int main(void)
{
    int n, ans;
    scanf("%d", &n);

    if(n==0)
    {
        printf("1\n");
        return 0;
    }
    switch(n%4)
    {
        case 0: ans=6;
        break;
        case 1: ans=8;
        break;
        case 2: ans=4;
        break;
        case 3: ans=2;
        break;
    }
    printf("%d\n", ans);

    return 0;
}

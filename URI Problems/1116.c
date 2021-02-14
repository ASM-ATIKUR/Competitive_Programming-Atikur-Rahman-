#include <stdio.h>

int main()
{
    int n, x, y, i;
    float ans;
    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %d %d", &x, &y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            ans = (float)x/(float)y;
            printf("%.1f\n", ans);
        }
    }
    return 0;
}

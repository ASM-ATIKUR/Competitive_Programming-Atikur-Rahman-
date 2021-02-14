#include <stdio.h>

int main()
{
    int n, i, max=0, min=100,max_count, min_count, x;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf(" %d", &x);
        if(x>max) {
                max_count=i+1;
                max=x;
        }
        if(x<=min) {
                min_count = i+1;
                min=x;
        }
    }
    if(max_count>min_count)
    {
        printf("%d\n", max_count+n-min_count-2);
    }
    else printf("%d\n", max_count+n-min_count-1);
    return 0;
}

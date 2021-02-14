#include <stdio.h>

int main()
{
    int ara[105];
    int i, n, j, min;
    scanf(" %d", &n);
    for(i=0; i<n; i++)
    {
        scanf(" %d", &ara[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[j]<ara[i])
            {
                min=ara[j];
                ara[j]=ara[i];
                ara[i]=min;

            }
        }
        printf("%d ", ara[i]);
    }
    return 0;
}

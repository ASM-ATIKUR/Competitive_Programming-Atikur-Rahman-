#include <stdio.h>

int main()
{
    int n, i, j, k, l;
    scanf(" %d", &n);

    for(i=0, j=0, k=1; i<n; i++)
    {
        if(i<n-1){
            printf("%d ", j);
        }
        else
        {
            printf("%d\n", j);
        }
        l=k;
        k=j+k;
        j=l;

    }


    return 0;
}

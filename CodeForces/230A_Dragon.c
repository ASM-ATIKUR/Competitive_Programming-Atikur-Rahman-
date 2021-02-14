#include <stdio.h>

int main()
{
    int s, n, check=1, a[1009], b[1009], i, j, min, temp, t;
    scanf(" %d %d", &s, &n);
    for(i=0; i<n; i++)
    {
        scanf(" %d %d", &a[i], &b[i]);
    }
    for(i=0; i<n; i++)
    {
        min=a[i];
        t=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<min)
            {
                t=j;
                min=a[j];
            }
        }
        temp=a[i];
        a[i]=a[t];
        a[t]=temp;
        temp=b[i];
        b[i]=b[t];
        b[t]=temp;

        if(s<=a[i]) check=0;
        else
        {
            s+=b[i];
        }
    }
    if(check) printf("YES\n");
    else printf("NO\n");

    return 0;
}

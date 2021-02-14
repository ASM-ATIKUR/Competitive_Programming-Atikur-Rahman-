#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i, j, k;
    char a[1000], temp;

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %[^\n]s", a);

        for(j=0; j<strlen(a); j++)
        {
            if(a[j]>='a' && a[j] <='z' || a[j]>= 'A' && a[j] <= 'Z')
            {
                a[j] = a[j]+3;
            }

        }

        for(j=0, k= strlen(a)-1; j<ceil(strlen(a)/2.00); j++, k--)
        {
            temp = a[j];
            a[j]= a[k];
            a[k] = temp;
        }


        for(j=trunc(strlen(a)/2); j<strlen(a); j++)
        {
            a[j] = a[j]-1;
        }
        printf("%s\n", a);

    }

    return 0;

}

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, count = 0, temp=0;


    scanf("%d", &n);
    char a[n];

    scanf(" %s", a);

    for(i=0; i<n; i++)
    {
        count=0;
        for(j=i+1; j<n; j++)
        {
            if(a[j]!=a[i])
            {
                break;
            }
            else
            {
                count++;
            }
        }
        i=i+count;
        temp+=count;

    }

    printf("%d\n", temp);

    return 0;
}

#include <stdio.h>

int main()
{
    int i, m, n, sum = 0, x, y;
    scanf(" %d %d",&m, &n);

    if(m>n)
    {
        x=n;
        y=m;
    }
    else{
        x=m;
        y=n;
    }

    for(i=++x; i<y; i++)
    {
        if(i%2!=0)
        {
            sum +=i;
        }
    }
    printf("%d\n", sum);

    return 0;
}

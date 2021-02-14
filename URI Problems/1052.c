#include <stdio.h>

int main()
{
    int n, i;
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf(" %d", &n);
    for(i=1; i<=12; i++)
    {
        if(n==i)
        {
            printf("%s\n", month[--i]);
            break;
        }
    }

    return 0;
}

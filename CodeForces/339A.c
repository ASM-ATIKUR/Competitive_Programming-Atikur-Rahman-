#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char minimum, temp;

    int i, j, l;

    scanf(" %s", a);

    for(i=0; i<strlen(a);i+=2)
    {
        minimum = '4';
        for(j=i; j<strlen(a); j+=2)
        {
            if(a[j]<minimum)
            {
                minimum = a[j];
                l=j;
            }
        }
        temp = a[i];
        a[i]=minimum;
        a[l]= temp;
    }

    printf("%s\n", a);

    return 0;
}

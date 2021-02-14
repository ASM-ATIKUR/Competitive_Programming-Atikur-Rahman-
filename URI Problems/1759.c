#include <stdio.h>

int main()
{
    int n, i;
    char a[] = "Ho";

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            printf("%s", a);
        }
        else{
            printf(" %s", a);
        }
    }
    printf("!\n");

    return 0;
}

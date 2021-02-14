#include <stdio.h>

int main()
{
    int num[10000];
    int n, i, count=0, dount=0;
    scanf(" %d", &n);
    for(i=0; i<n; i++)
    {
        scanf(" %d", &num[i]);
        if(num[i]>=10&&num[i]<=20)
        {
            count++;
        }
        else
        {
            dount++;
        }
    }
    printf("%d in\n%d out\n", count, dount);

    return 0;

}

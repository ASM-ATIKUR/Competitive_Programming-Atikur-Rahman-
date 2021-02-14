#include <stdio.h>

int main()
{
    int n, po=0, count=0, a;
    scanf(" %d", &n);
    while(n--)
    {
        scanf(" %d", &a);
        if(a<0) {
            if(po<1) count++;
            if(po>0) po--;
        }
        else po+=a;
    }
    printf("%d\n", count);

    return 0;
}

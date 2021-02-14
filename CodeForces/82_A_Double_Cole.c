#include <stdio.h>

int main()
{
    int n, i, j, sum=0, ans;
    scanf("%d", &n);
    for(i=1; n-(i*5)>0; i*=2)
    {
        n-=(i*5);
    }
    if(n%i) n=n/i+1;
    else n/=i;

    switch(n)
    {
        case 1: printf("Sheldon\n");
        break;
        case 2: printf("Leonard\n");
        break;
        case 3: printf("Penny\n");
        break;
        case 4: printf("Rajesh\n");
        break;
        case 5: printf("Howard\n");
    }
    return 0;
}

#include <stdio.h>

int ans(int a, int b, int c);
int max(int x, int y);
int min(int x, int y);

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", ans(a, b, c));

    return 0;
}

int ans(int a, int b, int c)
{
    int m=0, x, y;

    if(a==1 && b==1 && c==1) return 3;
    else if(a==1 && b==1) return 2*c;
    else if(b==1 && c==1) return 2*a;
    else if(a==1 && c==1) return 2*b;
    else if(a==1) return (a+b)*c;
    else if(c==1) return a*(b+c);
    else if(b==1) return max(a, c)*(min(a, c)+b);
    else return a*b*c;
}

int max(int x, int y)
{
    if(x>y) return x;
    else return y;
}
int min(int x, int y)
{
    if(x<y) return x;
    else return y;
}

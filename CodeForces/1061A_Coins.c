#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, s, ans;
    scanf("%d %d", &n, &s);
    if(n>=s) ans=1;
    else if(s%n==0) ans=s/n;
    else ans=(s/n)+1;

    printf("%d\n", ans);


    return 0;
}

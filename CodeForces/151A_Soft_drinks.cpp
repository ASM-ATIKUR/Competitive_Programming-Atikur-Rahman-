#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    l=k*l;
    c=c*d;
    l=l/nl;
    p=p/np;

    n=(min(c, min(l,p))/n);

    printf("%d\n", n);

    return 0;

}

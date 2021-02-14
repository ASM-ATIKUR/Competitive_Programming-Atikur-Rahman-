#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[3];
    scanf("%d %d %d", &ara[0], &ara[1], &ara[2]);
    sort(ara, ara+3);

    if(((ara[0]+ara[1])*2)<(ara[0]+ara[1]+ara[2])) printf("%d\n", ((ara[0]+ara[1])*2));
    else printf("%d\n", (ara[0]+ara[1]+ara[2]));

    return 0;
}

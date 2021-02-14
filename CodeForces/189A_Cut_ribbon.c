#include <bits/stdc++.h>

using namespace std;


int main()
{
    int ara[3], n, i, cnt=0, j, x, ans=0;
    scanf("%d %d %d %d", &n, &ara[0], &ara[1], &ara[2]);
    sort(ara, ara+3);
    x=n;
    for(i=0; i<3; i++)
    {
        while(x%ara[i]==0 && x!=0)
        {
            cnt++;
            x/=ara[i];
        }
    }


    printf("%d\n", cnt);

    return 0;
}

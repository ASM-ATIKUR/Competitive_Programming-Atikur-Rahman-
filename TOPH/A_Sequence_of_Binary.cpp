#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[63]={1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10010, 10100, 10110, 11000, 11010, 11100, 11110,
                10001, 10011, 10101, 10111, 11001, 11011, 11101, 11111};

    for(int i=31; i<47; i++)
    {
        ara[i]=ara[i-16]*10;
    }
    for(int i=47; i<63; i++)
    {
        ara[i]=ara[i-16]+1;
    }

    sort(ara, ara+63);

    int n, m, ans, cs=1;
    cin>>n;
    while(n--)
    {
        scanf("%d", &m);
        ans=0;
        for(int i=0; i<63; i++)
        {
            if(m>=ara[i])
                ans++;
        }
        printf("Case %d: %d\n", cs++, ans);
    }

    return 0;
}

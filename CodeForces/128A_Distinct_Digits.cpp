#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    while(a<=b)
    {
        int x=a, d=0;
        set<int> y;
        while(x)
        {
            y.insert(x%10);
            x/=10;
            d++;
        }
        if(y.size()==d)
        {
            printf("%d\n", a);
            return 0;
        }
        a++;
    }
    printf("-1\n");
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, pre=0, x, fg=1, cnt=0;
    cin>>n;
    deque<int> ara;
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        ara.push_back(x);
    }
    i=0;
    while(i<n)
    {
        if(ara.front()>=ara.back())
        {
            ara.push_front(ara.back());
            ara.pop_back();
            cnt++;
        }
        else break;
        i++;
    }
    pre=ara.front();
    ara.pop_front();
    x=0;
    for(i=1; i<n; i++)
    {
        if(pre>ara.front())
            fg=0;
        else if(pre==ara.front())
            x++;
        pre= ara.front();
        ara.pop_front();
    }
    if(x==n-1) printf("%d\n", 0);
    else if(fg)
        printf("%d\n", cnt);
    else printf("-1\n");

    return 0;
}

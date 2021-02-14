#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, rb=0, day_cnt=0, num;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>num;
        if(i>rb)
        {
            day_cnt++;
            //cout<<rb<<endl;
        }
        rb=max(rb, num);


    }

    cout<<day_cnt<<endl;

    return 0;
}

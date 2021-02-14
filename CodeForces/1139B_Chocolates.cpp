#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector < int > v(n);
    long long i, cnt=0, num;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    long long pre=v[n-1];
    cnt+=v[n-1];
    for(i=n-2; i>=0; i--)
    {
        if(v[i]<pre)
        {
            cnt+=v[i];
            pre=v[i];
        }
        else if(pre-1>=0)
            {cnt+=pre-1;pre--;}

        //cout<< cnt << endl;
        //cout<< pre << endl;

    }
    cout<<cnt<<"\n";

    return 0;
}

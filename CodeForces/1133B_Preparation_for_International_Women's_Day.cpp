#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, num, cnt=0;
    cin>>n>>k;
    int ara[k]={0};

    for(int i=0; i<n; i++)
    {
        cin>>num;

        if(num%k==0 && ara[0])
        {
            cnt+=2;
            ara[0]--;
        }
        else if(ara[k-(num%k)] && num%k)
        {
            cnt+=2;
            ara[k-(num%k)]--;;
        }
        else ara[num%k]++;


    }
    cout<<cnt<<"\n";

    return 0;
}

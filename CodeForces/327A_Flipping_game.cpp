#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, cnt=0, ans=0, sum;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        sum=0;
        cnt=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];

            cnt=j-i+1-sum;
            for(int k=0; k<i; k++)
            {
                if(arr[k]==1) cnt++;
            }
            for(int k=j+1; k<n; k++)
                if(arr[k]==1)cnt++;

            ans=max(cnt, ans);
        }

    }
    cout<<ans<<"\n";

    return 0;

}

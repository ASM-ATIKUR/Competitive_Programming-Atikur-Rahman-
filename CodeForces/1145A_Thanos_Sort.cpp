#include <bits/stdc++.h>
using namespace std;

bool issort(int *arr, int n)
{
    int a=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<a)
            return false;
        a=arr[i];
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int i, j, ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    for(i=n; i>1; i/=2)
    {
        for(j=0; j<n; j+=i)
        {
            if(issort(ara+j, i)){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<1<<endl;
    return 0;
}

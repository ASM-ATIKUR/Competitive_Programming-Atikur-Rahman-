#include <bits/stdc++.h>
using namespace std;

void sr(int n, p, w, d)
{
    long long x,z,y=-1, l, r, mid, ck;
    while(l<=r)
    {
        mid=(l+r)/2;
        ck=(n-mid);
        if((p-(mid*w))%ck)
        {
            y=(p-(mid*w))%ck;
            break;
        }

    }
}

int main()
{
    long long n, p, w, d;
    cin>>n>>p>>w>>d;

}

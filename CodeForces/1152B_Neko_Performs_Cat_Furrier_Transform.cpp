#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, cnt, pt, i, ans=0;
    vector <int> v;
    cin>>x;
    while(1)
    {
        a=x;
        cnt=1;
        i=1;
        pt=0;
        int pb=0;
        while(a>0)
        {
            //cout<<(a&1)<<endl;
            if(!(a&1))
                {pt=i;pb=cnt;}
            i*=2;
            cnt++;
            a=a>>1;
        }
        if(pt==0)
            break;
        //cout<<"...";
        ans++;
        v.push_back(pb);
        x=x^(pt*2-1);


        a=x;
        cnt=0;
        while(a>0)
        {
            if(!(a&1))
                {cnt++;}
            a=a>>1;
        }
        if(cnt==0)
            break;
        ans++;
        x++;
    }
    //cout<<x<<endl;
    cout<<ans<<endl;
    a=v.size();
    for(i=0; i<a; i++)
    {
        if(i==a-1)
            printf("%d\n", v[i]);
        else printf("%d ", v[i]);
    }

    return 0;
}

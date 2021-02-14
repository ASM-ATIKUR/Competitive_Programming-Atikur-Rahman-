#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <int, int> ck;
    vector<int> c;
    c.push_back(1);
    c.push_back(1);

    long long sc=1;
    ck.insert(pair<int, int>(1,1));


    for(int i=2; sc<=1000000000; i++)
    {
        if(i%2)
        {
            sc= (long long)c[i/2]*c[(i/2)+1]+2;
            ck.insert(pair<int, int>(sc,i));
        }
        else
        {
            sc=(long long) c[i/2]*c[i/2]+1;
            ck.insert(pair<int, int>(sc,i));
        }
        c.push_back(sc);
    }

    int t, cs=1, x;
    cin>>t;
    while(t--)
    {
        cin>>x;

        printf("Case %d: %d\n", cs++, ck[x]);
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, n, i, z, o, zz, oo;
    vector<string> x;
    vector<int> sz;
    string s;
    cin>>q;
    while(q--)
    {
        scanf("%d", &n);
        z=0;o=oo=zz=0;
        for(i=0; i<n; i++)
        {
            cin>>s;
            x.push_back(s);
            sz.push_back(s.length());
            for(int j=0; j<sz[i]; j++)
            {
                if(s[j]=='0') z++;
                else o++;
            }
            if(sz[i]%2) zz++;
            else oo++;
        }
        int cnt=0;
        //printf("%d..%d.....\n", z, o);
//        for(i=0; i<n; i++)
//        {
//            if(sz[i]&1)
//            {
//                if(z&1){
//                    if(z>sz[i]) z-=sz[i];
//                    else{
//                        o=o-sz[i]+z;
//                        z=0;
//                    }
//                }
//                else
//                {
//                    if(o>sz[i]) o-=sz[i];
//                    else
//                    {
//                        z=z-sz[i]+o;
//                        o=0;
//                    }
//                }
//            }
//            else
//            {
//                if(z&1==0){
//                    if(z>sz[i]) z-=sz[i];
//                    else{
//                        o=o-sz[i]+z;
//                        z=0;
//                    }
//                }
//                else if(o&1==0)
//                {
//                    if(o>sz[i]) o-=sz[i];
//                    else
//                    {
//                        z=z-sz[i]+o;
//                        o=0;
//                    }
//                }
//
//            }
//            printf("%d..%d..\n", z, o);
//            if(z>=0 && o>=0) cnt++;
//        }
//        cout<<cnt<<".."<<endl;

//    for(i=0; i<n; i++)
//    {
//        //printf("%d...$\n", sz[i]);
//        if((sz[i]%2==z%2) && (sz[i]<=z)) {z-=sz[i];sz[i]=0;}
//        else if((sz[i]%2==o%2)&&(sz[i]<=o)) {o-=sz[i];sz[i]=0;}
//        else if(sz[i]<=z){z-=sz[i];sz[i]=0;}
//        else if(sz[i]<=o) {o-=sz[i];sz[i]=0;}
//        else if(sz[i]%2)
//        {
//            if(z%2)
//            {
//                sz[i]-=z;
//                z=0;
//                o-=sz[i];
//                sz[i]=0;
//            }
//            else if(o%2)
//            {
//                sz[i]-=o;
//                o=0;
//                z-=sz[i];
//                sz[i]=0;
//            }
//            else
//            {
//                sz[i]-=z-1;
//                z=1;
//                sz[i]-=o;
//            }
//        }
//        else
//        {
//            if(z%2==0)
//            {
//                sz[i]-=z;
//                z=0;
//                o-=sz[i];
//                sz[i]=0;
//            }
//            else if(o%2==0)
//            {
//                sz[i]-=o;
//                o=0;
//                z-=sz[i];
//                sz[i]=0;
//            }
//            else
//            {
//                sz[i]-=z-1;
//                z=1;
//                sz[i]-=o;
//            }
//        }
//        //printf("%d..%d..\n", z, o);
//        if(sz[i]==0)cnt++;
//    }
//        cout<<cnt<<endl;
int cm=0;
        if(z%2)cm=1;
        if(o%2)cm++;
        if(cm==2)
        {
            if(zz%2==0&&zz>1) cout<<n<<endl;
            else cout<<n-1<<endl;
        }
        else if(cm==1)
        {
            if(zz%2) cout<<n<<endl;
            else cout<<n-1<<endl;
        }
        else
        {
            if(zz%2==0) cout<<n<<endl;
            else cout<<n-1<<endl;
        }
//        if(oo%2==0 && zz%2==0)
//        {
//            if(z%2==0 && o%2==0) printf("%d\n", n);
//            else printf("%d\n",n-1);
//        }
//        else
//        {
//            if(z%2 || o%2) printf("%d\n", n);
//            else printf("%d\n",n-1);
//        }
        sz.clear();
        x.clear();
    }

    return 0;
}


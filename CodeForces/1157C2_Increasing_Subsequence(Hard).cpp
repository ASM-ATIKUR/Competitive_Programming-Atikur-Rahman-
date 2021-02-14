#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> d;
    char ans[200005];
    int n, i, j=0, a, last=0;

    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        d.push_back(a);
    }
    while(d.size()>0)
    {
        //cout<<last<<"    "<<d.front()<<"''"<<d.back()<<endl;
        if(d.front()<d.back())
        {
            if(d.front()>last)
            {
                ans[j++]='L';
                last=d.front();
                d.pop_front();
            }
//            else if(d.back()>last)
//                {ans[j++]='R';last=d.back();d.pop_back();}
            else break;
        }
        else if(d.back()<d.front())
        {
            if(d.back()>last)
                {ans[j++]='R';last=d.back();d.pop_back();}
//            else if(d.front()>last)
//            {
//                ans[j++]='L';
//                last=d.front();
//                d.pop_front();
//            }
            else break;
        }
        else break;
    }
    ans[j]='\0';
    if(d.size()>0)
    {
        string a="",b="";
        deque<int> x;
        x=d;
        int l=last;
        if(d.front()>last)
        {
            while(x.front()>last && x.size()>0)
            {
                a+="L";
                last=x.front();
                x.pop_front();
            }
        }
        x=d;
        last=l;
        if(d.back()>last)
        {
            while(x.back()>last && x.size()>0)
            {
                b+="R";
                last=x.back();
                x.pop_back();
            }
        }
        //cout<<a<<"....."<<b<<endl;
        if(a.length()>b.length())
        {
            printf("%d\n", strlen(ans)+a.length());
            printf("%s",ans);
            cout<<a<<endl;
        }
        else
        {
            printf("%d\n", strlen(ans)+b.length());
            printf("%s",ans);
            cout<<b<<endl;
        }
    }
    else
    {
        printf("%d\n", strlen(ans));
        printf("%s\n", ans);
    }


    return 0;
}

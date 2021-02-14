#include <bits/stdc++.h>
using namespace std;
char dtr(deque<int> d, int last)
{
    static char x;
    if(d.size()<=1)
        return x='R';
    last=d.front();
    d.pop_back();
    d.pop_front();
    if(d.front()>d.back()&& d.back()>last)
        return 'R';
    else if(d.front()<d.back() && d.front()>last)
        return 'L';
    else if(d.front()>last)
        dtr(d, last);

    return x;
}
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
        //cout<<d.front()<<"''"<<d.back()<<endl<<last<<"...\n";
        if(d.front()<d.back())
        {
            if(d.front()>last)
            {
                ans[j++]='L';
                last=d.front();
                d.pop_front();
            }
            else if(d.back()>last)
                {ans[j++]='R';last=d.back();d.pop_back();}
            else break;
        }
        else if(d.front()==d.back())
        {
            if(d.front()<=last)
                break;
            //cout<<dtr(d)<<"...\n";
            if(dtr(d, last)=='X')
            {
                ans[j++]='L';
                last=d.front();
                d.pop_front();
            }
            else
            {
                ans[j++]= dtr(d,last);
                if(dtr(d, last)=='L')
                    {last=d.front();d.pop_front();}
                else
                {
                    last=d.back();
                    d.pop_back();
                }
            }

        }
        else{
            if(d.back()>last)
                {ans[j++]='R';last=d.back();d.pop_back();}
            else if(d.front()>last)
            {
                ans[j++]='L';
                last=d.front();
                d.pop_front();
            }
            else break;
        }
    }
    ans[j]='\0';
    printf("%d\n", strlen(ans));
    printf("%s\n", ans);

    return 0;
}

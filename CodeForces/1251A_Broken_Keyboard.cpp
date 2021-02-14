#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int st[30];
    int t, i;
    cin>>t;
    while(t--)
    {
        cin>>s;
        memset(st, 0, sizeof(st));
        for(i=0; i<s.length(); )
        {
            int cnt=1, j=i+1;
            for(; j<s.length(); j++)
            {
                if(s[j]==s[i])
                {
                    cnt++;
                }
                else break;
            }
            if(st[s[i]-'a']%2==0)st[s[i]-'a']=cnt;
            i=j;
        }
        for(i=0; i<26; i++)
        {
            //printf("%d..", st[i]);
            if(st[i]&1)
                printf("%c", 'a'+i);
        }
        printf("\n");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lm=-1, mn=-1, fl=0, s;
    char num[200009];
    gets(num);
    s= strlen(num);
    for(int i= s-2; i>=0; i--)
    {
        if(!((num[i]-'0')%2))
        {
            if(fl==0) lm=i;
            if(num[i]<num[s-1])
                mn=i;
            fl=1;
        }
    }
    //cout<<lm<<" "<<mn<<endl;
    if(fl)
    {
        if(mn!=-1)
        {
            swap(num[mn],num[s-1]);
        }
        else swap(num[lm],num[s-1]);

        puts(num);
    }
    else printf("-1\n");

    return 0;
}

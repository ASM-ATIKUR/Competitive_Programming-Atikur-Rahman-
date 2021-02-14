#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <char> c, v;
    char str[15];
    gets(str);
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='A' || str[i] == 'E'|| str[i] == 'U'|| str[i] == 'I'|| str[i] == 'O')
            v.insert(str[i]);
        else c.insert(str[i]);
    }
    if(v.size()>= c.size())
        cout<<"YES\n";
    else cout<<"NO\n";


    return 0;
}

#include <bits/stdc++.h>
using namespace std;
vector<char> sbst;
void ss(char str[], int i, int x)
{
    if(i>=strlen(str))
    {
//        vector<char>:: iterator ii;
//        for(ii=sbst.begin(); ii!=sbst.end(); ii++)
//            printf("%c", *ii);
//        cout<<endl;
        return;
    }

    ss(str, i+1, x);
    sbst.push_back(str[i]);
    if(sbst.size()==x)
    {
        vector<char>:: iterator ii;
        for(ii=sbst.begin(); ii!=sbst.end(); ii++)
            printf("%c", *ii);
        cout<<endl;
        return;
    }
    ss(str, i+1, x);
    sbst.pop_back();
}
int main()
{
    int x;
    char str[100];
    while(scanf("%s %d", str, &x)!=EOF)
    {
        ss(str, 0, x);
    }
    return 0;
}

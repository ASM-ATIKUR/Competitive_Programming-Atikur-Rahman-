#include <bits/stdc++.h>
using namespace std;

char check(int a, int b)
{
    if(a>b)
        return '>';
    if(a<b)
        return '<';
    return '=';
}
int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        printf("%c\n", check(a,b));
    }
    return 0;
}

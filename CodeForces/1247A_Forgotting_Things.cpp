#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(abs(a-b)>1 && abs(a-b)<8)
    {
        printf("-1\n");
    }
    else if(abs(a-b)==1)
    {
        printf("%d %d\n", a*10+9, b*10);
    }
    else if(a==9 && b==1) printf("%d %d\n", a, b*10);
    else printf("%d %d\n", a*10+1, b*10+2);


    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int fn(int n)
{
    static int x=0;
    x++;
    if(n<10)
        return x+8;
    n++;
    int a=n;
    while(n%10==0)
        {n/=10;}

    //cout<<n<<endl;
    fn(n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fn(n));

    return 0;
}

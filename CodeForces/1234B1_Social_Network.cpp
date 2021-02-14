#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>lst;
    set<int>s;
    int n, k, x, pr=0;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        s.insert(x);
        if(s.size()>pr)
        {
            if(lst.size()==k)
            {
                s.erase(s.find(lst.back()));
                lst.pop_back();
                pr--;
            }
            lst.push_front(x);
            pr++;
        }
    }
    x=lst.size();
    printf("%d\n", x);
    while(x--)
    {
        printf("%d ", lst.front());
        lst.pop_front();
    }
    return 0;
}

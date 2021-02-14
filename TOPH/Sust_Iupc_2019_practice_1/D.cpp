#include <bits/stdc++.h>
using namespace std;

const double pi=3.1416;
int main()
{
    int t;
    double area, l;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf", &l);
        area=pi*l*l;
        printf("%.3lf\n", area);
    }

    return 0;
}

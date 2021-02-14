#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r, x, y, x1, y1, len;
    cin>>r>>x>>y>>x1>>y1;
    len= sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    double step= ceil(len/(2*r));

    printf("%.0f\n", step);

    return 0;
}

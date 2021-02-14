#include <bits/stdc++.h>
using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return abs((x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3)/2);
}
int main()
{
    double x1, x2, x3, y1, y2, y3, px, py;
    int n, cnt=0;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y3, &x3, &y3);

    double A, P;
    A= area(x1, y1, x2, y2, x3, y3);
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lf %lf", &px, &py);
        P= area(x1, y1, x2, y2, px, py)+ area(x1, y1, px, py, x3, y3)+area(px, py, x2, y2, x3, y3);

        if(P-A<0.000000001)
            cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}

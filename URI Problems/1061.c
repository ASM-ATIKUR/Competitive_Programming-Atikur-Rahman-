#include <stdio.h>

int main()
{
    char a[4], b[4];
    int day, h, m, s, day1, h1, m1, s1, d, d1, du;
    scanf(" %s%d", a, &day);
    scanf(" %d%s%d%s%d", &h, b, &m, a, &s);

    scanf(" %s%d", a, &day1);
    scanf(" %d%s%d%s%d", &h1, b, &m1, a, &s1);

    d1 = (day1*24*3600)+(h1*3600)+(m1*60)+s1;
    d = (day*24*3600)+(h*3600)+(m*60)+s;

    du = d1-d;
    printf("%d dia(s)\n", du/86400);
    du= du%86400;
    printf("%d hora(s)\n", du/3600);
    du = du%3600;
    printf("%d minuto(s)\n", du/60);
    du = du%60;
    printf("%d segundo(s)\n", du);


    return 0;
}

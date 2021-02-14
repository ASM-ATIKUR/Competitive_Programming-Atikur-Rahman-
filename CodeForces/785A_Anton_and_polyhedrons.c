#include <stdio.h>
#include <string.h>

int main()
{
    long long int n, cnt=0;
    char nme[20];
    scanf("%lld", &n);
    while(n--)
    {
        scanf("%s", nme);

        if(!strcmp(nme, "Tetrahedron")) cnt+=4;
        else if(!strcmp(nme, "Cube")) cnt+=6;
        else if(!strcmp(nme, "Octahedron")) cnt+=8;
        else if(!strcmp(nme, "Dodecahedron")) cnt+=12;
        else if(!strcmp(nme, "Icosahedron")) cnt+=20;
    }
    printf("%lld\n", cnt);

    return 0;
}

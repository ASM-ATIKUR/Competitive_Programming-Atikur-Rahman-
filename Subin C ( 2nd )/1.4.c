#include <stdio.h>

int main()
{
    char ara[5]= {'a', 'b', 'c', 'd', 'e'};
    printf("Value of ara %c, %c, %c, %c, %c\n", ara[0], ara[1], ara[2], ara[3], ara[4]);

    printf("Address of ara %p\n", ara);
    printf("Address of ara[0] %p\n", &ara[0]);
    printf("Address of ara[1] %p\n", &ara[1]);
    printf("Address of ara[2] %p\n", &ara[2]);
    printf("Address of ara[3] %p\n", &ara[3]);
    printf("Address of ara[4] %p\n", &ara[4]);


    return 0;
}

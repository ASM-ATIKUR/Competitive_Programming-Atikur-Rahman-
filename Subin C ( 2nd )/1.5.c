#include <stdio.h>

int main()
{
    long long int num;
    long char ch;
    double d_num;
    float f_num;

    printf("%u\n", sizeof(int));
    printf("Size of int: %d\n", sizeof(num));
    printf("Size of int: %d\n", sizeof(ch));
    printf("Size of int: %d\n", sizeof(d_num));
    printf("Size of int: %d\n", sizeof(f_num));

    return 0;
}

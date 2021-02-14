#include<stdio.h>

int main()
{
    char str1[]="Bangla", str2[] ="desh", str[12];
    int i, j, length1 = 6, length2= 4;

    for(i=0, j=0; i<length1; i++,j++){
        str[j] = str1[i];
    }
    for(i=0; i<length2; i++, j++){
        str[j] = str2[i];
    }
    str[j]= '\0';

    printf("%s\n", str);
    return 0;
}

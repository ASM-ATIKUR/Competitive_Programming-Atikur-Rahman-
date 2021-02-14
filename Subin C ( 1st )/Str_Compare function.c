#include<stdio.h>



int string_length(char str[])
{
    int i, length=0;

    for(i=0; str[i]!='\0'; i++){
        length++;
    }
    return length;
}

int str_com(char a[], char b[], int sla, int slb)
{
    int i, j;

    if(sla == slb){
        for(i=0; a[i] != '\0' && b[i] != '0'; i++){
            if(a[i] < b[i]){
                return -1;
                }
            if(a[i] > b[i]){
                return 1;
                }
            else {
                return 0;
                }
        }
    }
    if(sla < slb){
        return -1;
    }
    if(sla > slb){
        return 1;
    }
}

int main()
{
    char a[10], b[10];
    int i;

    gets(a);
    gets(b);

    int sla= string_length(a);
    int slb= string_length(b);

    i= str_com(a, b, sla, slb);

    if(i==0){
        printf("String is equal");
    }
    if(i==-1){
        printf("First string is small");
    }
    if(i==1){
        printf("Second string is small");
    }
    return 0;

}

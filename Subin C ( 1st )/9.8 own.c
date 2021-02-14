#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000], b[100];
    int i, j, x=0;

    while(NULL!= gets(a)){

    for(i=0, j=0; a[i]!='\0';i++, j++){

        if(a[i]>= 'a' && a[i]<='z' || a[i]>='A' && a[i]<= 'Z' || a[i]>='0' && a[i]<= '9' ){
            if(j==0 && a[i]>='a' && a[i]<= 'z')
                b[j] = 'A'+ (a[i]-'a');
            else{
                b[j]= a[i];
            }
        }
        else{
            b[j]='\0';
            printf("%s\n", b);
            j=-1;

        }

    }
    if(a[i]=='\0'){
        b[j]=a[i];
        printf("%s\n\n", b);
    }
    }

    return 0;
}

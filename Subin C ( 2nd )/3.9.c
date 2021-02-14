#include <stdio.h>

int main(void)
{
    FILE *fp;
    int reval;

    reval = remove("Pro.jpg");

    if(reval !=0){
        perror("File remove failed");
        return 1;
    }

    printf("%s removed success fully\n", "Pro.jpg");

    reval = remove("Pro.jpg");

    if(reval !=0){
        perror("File remove failed");
        return 1;
    }

    printf("%s removed success fully\n", "Pro.jpg");

    return 0;
}

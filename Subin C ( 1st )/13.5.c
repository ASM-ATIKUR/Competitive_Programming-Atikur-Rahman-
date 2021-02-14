#include<stdio.h>

int main()
{
    int i, j, n;
    int ara[10][10];
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            ara[i][j]=1;
        }
    }
    i;
    int p=0, q=0;
    printf("Plese enter the number of block cells: ");
    scanf("%d", &n);
    printf("Now enter the cells: ");
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &p, &q);
        ara[p][q]=0;
    }


    int x, y;
    char c;
    printf("Please enter the initial position: ");
    scanf("%d %d", &x, &y);


    while(1)
    {

        scanf("%c", &c);
        p=x, q=y;
        if(c=='S'){
            break;
        }

        else if(c=='U'){
            if(ara[--p][q]==1){
            x--;
            }
            else{
                printf("_ _ _ _ Blocked\n");
                continue;
            }

        }
        else if(c=='D'){
            if(ara[++p][q]==1){
            x++;
            }
            else{
                printf("_ _ _ _ Blocked\n");
                continue;
            }

        }
        else if(c=='R'){
            if(ara[p][++q]==1){
            y++;
            }
            else{
                printf("_ _ _ _ Blocked\n");
                continue;
            }

        }
        else if(c=='L'){
            if(ara[p][--q]==1){
            y--;
            }
            else{
                printf("_ _ _ _ Blocked\n");
                continue;
            }

        }
    }
    printf("Final position of the robot is: %d %d\n", x ,y);
    return 0;
}

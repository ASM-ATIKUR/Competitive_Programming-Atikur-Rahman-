#include<stdio.h>

int bin_srch(int ara[], int low_index, int high_index, int num)
{
    int mid_index;

    while(low_index <= high_index)
    {
        mid_index = (low_index+high_index)/2;

        if(ara[mid_index] == num)
        {
            break;
        }
        if(num < ara[mid_index])
        {
            high_index = mid_index-1;
        }
        else
        {
            low_index = mid_index+1;
        }
    }
    if(low_index > high_index)
    {
        mid_index = -1;
    }

        return mid_index;

}

int main()
{
    int ara[]= {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};

    int li=0;
    int hi=15;
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int mi = bin_srch(ara, li, hi, n);

    if(mi==-1)
    {
        printf("%d is not found in the array. \n\n", n);
    }
    else
    {
        printf("%d is found in the array. It is the %d th number of the array. \n\n", n, mi+1);

    }

    return 0;

}

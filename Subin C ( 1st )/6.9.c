#include<stdio.h>

int main()
{
    int i;

    int total_marks[] = {86, 78, 94, 68, 94, 78, 97, 78, 97,
    97, 75, 56, 78, 79, 79, 57, 68, 78, 67, 68, 69, 60, 58,
    59, 59, 90, 98, 96, 92, 87, 67, 59, 76, 98, 81, 82, 62,
    71, 91, 82};
    int marks_count[101];
    for(i=0; i<101; i++){
        marks_count[i]= 0;
    }
    for(i=0; i<40; i++){
        marks_count[total_marks[i]]++;
    }
    for(i=50; i<=100; i++){
        printf("Marks: %d   Count; %d\n", i, marks_count[i]);
    }
    return 0;
}

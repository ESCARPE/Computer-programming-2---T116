/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a C program that calculates the average of students'
grades(five subjects)*/

#include <stdio.h>

int main()
{
    int english, filipino, science, PE, math;
    float Total, Average;

    printf("Enter five numbers: \n");
    scanf("%d%d%d%d%d", &english, &filipino, &science, &PE, &math);

    Total = english + filipino + science + PE + math;
    Average = Total / 5;

    printf("Average  = % .0f\n", Average);

    return 0;
}

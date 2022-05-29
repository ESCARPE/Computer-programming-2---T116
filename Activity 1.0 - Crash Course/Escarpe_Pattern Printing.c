/*ESCARPE,VANESSA T. BSIT 1-A T116
Using nested loops(a loop within a loop),create a program that
will accept an integer greater than 0(N),and print out N lines
of asterisks('*')into a pattern specific to that input,as seen
on the samples.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i < n + 1; i++)
        {
        for (int j = 1; j <= i; j++)
        {
        if (j == 1)
        {
        for (int k = 0; k < n - i; k++)
        {
           printf(" ");
        }
         }
           printf("* ");
        }
           printf("\n");
        }
    }
    else
    {
        printf("Invalid input!");
        return -1;
    }
    return 0;
}

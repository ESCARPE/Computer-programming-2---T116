/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a program that accepts 10 positive integers and
points out the smallest and largest number(s)in the list.*/

#include <stdio.h>
int main()
{

    printf("\n\n MIN AND MAX \n");
    int min = 1,max = 1;
    for (int a = 1; a <= 10; a++)
    {
        int num;
        printf("\n[%d] Input Number: ",a);
        scanf("%d",&num);
    if(num > 0)
    {
        if(num > max)
            {
            max = num;
            }

        if(num < min)
            {
            min = num;
            }
    }
    else {
            printf("This is an invalid input. Try Again.\n");
            --a;
            continue;
        }

    }
    printf("Min: %d",min);
    printf("\nMax: %d",max);

return 0;
}

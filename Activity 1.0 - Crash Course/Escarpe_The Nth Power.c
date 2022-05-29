/*ESCARPE, VANESSA T. BSIT 1-A T116
Create a program that accepts two(2)integers to represent the variables
X: The base(represented as X), and the exponent(represented as Y). X may
be greater or lesser than 0,but should not be equal to 0. For Y,several
constraints are placed:*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x, y, ans;
    printf("\n\n THE NTH POWER \n");
     printf("\nEnter X: ");
      scanf("%d", &x);
       printf("Enter Y: ");
        scanf("%d", &y);
    if (x != 0)
    {
        if (y > 0)
        {
            ans = x;
            for (int n = 1; n < y; n++)
            {
                ans *= x;
            }
        }
        else if (y < 0)
        {
            ans = x;
            for (int n = 1; n < abs(y); n++)
            {
                ans *= x;
            }
            printf("%d ^ %d = 1/%d", x, y, ans);
            return 0;
        }
        else{
            ans = 1;
        }
    }
    else
    {
        printf("X should not be equal to 0!");
        return -1;
    }
    printf("%d ^ %d = %d", x, y, ans);

return 0;
}

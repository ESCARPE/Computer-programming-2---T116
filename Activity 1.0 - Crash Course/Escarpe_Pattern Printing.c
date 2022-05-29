/*ESCARPE,VANESSA T. BSIT 1-A T116
Using nested loops(a loop within a loop),create a program that
will accept an integer greater than 0(N),and print out N lines
of asterisks('*')into a pattern specific to that input,as seen
on the samples.*/

#include<stdio.h>
int main ()
{
        int a;
        int i,j;

        printf("\n\n PATTERN PRINTING \n");
        while(a<=0)

     {
       printf("\nEnter a number: ");
       scanf("%d", &a);

   if(a<=0)
   {
    printf("\n Please input a number greater than zero");
   }

     }

     for(i=1;i<=a;i++)
{
      for(j=a;j>=1;j--)
    {
       if(i>=j)
        printf("* ");
         else
          printf(" ");
    }
    printf("\n");
}

return 0;

}


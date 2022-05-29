/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a program that converts a floating integer value from a specific temperature
measurement into another. The program should ideally accept three(3) inputs from the
user: (1)the value converted, (2)the original measurement and (3)the converted measurement.
The output should be the value after conversion. */

#include <stdio.h>
int main()
{
    float origTemp, convertedTemp;
     char option, converted;

     printf("\n\n TEMPERATURE CONVERTER \n");
      printf("\nInput orignal temperature value: ");
       scanf("\n%f", &origTemp);
        printf("Select orignal temperature scale: ");
         scanf("\n%c", &option);
          printf("Select converted temperature scale: ");
           scanf("\n%c", &converted);

    if (option == 'f' || option == 'F')
    {
        if (converted == 'c' || converted == 'C')
         {convertedTemp = (origTemp - 32) * 5 / 9;}

        else if (converted == 'k' || converted == 'K')
         {convertedTemp = (origTemp - 32) * 5 / 9 + 273.15;}

        else if (converted == 'f' || converted == 'f')
         {convertedTemp = origTemp;}

        else
         {printf("%c is not a valid input!", converted);
            return -1;}
    }
    else if (option == 'c' || option == 'C')
    {
        if (converted == 'c' || converted == 'C')
         {convertedTemp = origTemp;}

        else if (converted == 'k' || converted == 'K')
         {convertedTemp = origTemp + 273.15;}

        else if (converted == 'f' || converted == 'f')
         {convertedTemp = (origTemp * 9 / 5) + 32;}

        else
         {printf("%c is not a valid input!", converted);
            return -1;}
    }
    else if (option == 'k' || option == 'K')
    {
        if (converted == 'c' || converted == 'C')
         {convertedTemp = origTemp - 273.15;}

        else if (converted == 'k' || converted == 'K')
         {convertedTemp = origTemp;}

        else if (converted == 'f' || converted == 'f')
         {convertedTemp = (origTemp - 273.15) * 9 / 5 + 32;}

        else
         {printf("%c is not a valid input!", converted);
            return -1;}
    }
    else
    {
        printf("%c is not a valid input!", converted);
        return -1;
    }
    printf("%.2f %c = %.2f %c", origTemp, option, convertedTemp, converted);
    return 0;
}

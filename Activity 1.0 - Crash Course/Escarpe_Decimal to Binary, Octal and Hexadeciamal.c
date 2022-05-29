/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a program that accepts one integer input and outputs the
Binary, Octal, and Hexadecimal equivalent of that input.*/

#include<stdio.h>

    void convert(int, int);

    int main()
    {

    int number;
    printf("\n\n DECIMAL TO BINARY,OCTAL AND HEXADECIMAL \n");
    printf("\nEnter Decimal Integer: ");
        scanf("%d", &number);
    printf("Binary: ");
        convert(number, 2);
    printf("\nOctal: ");
        convert(number, 8);
    printf("\nHexadecimal: ");
        convert(number, 16);
    return 0;
    }

    void convert (int number, int base)

    {
    int reminder = number%base;
        if(number==0)
    return;
            convert(number/base, base);
        if(reminder < 10)
    printf("%d", reminder);
        else
    printf("%c", reminder-10+'A' );
    }

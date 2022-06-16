/*ESCARPE_VANESSA T. BSIT 1A T116
Create a Program that takes a string from the user input and converts the vowels into Uppercase.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char str[500];
  int n, vowels, cons, length;

  printf("Input a sentence: ");
  fgets(str, sizeof(str), stdin);
//Convert vowel letters to upper case
    n=0;
    while(str[n]!='\0')
    {
        if(str[n]=='a' ||str[n]=='e' ||str[n]=='i' ||str[n]=='o' ||str[n]=='u')
            str[n]=str[n]-32;
        n++;
    }
    printf("String Converted: ");
    puts(str);
    {
//Find the length  of a string
    length = strlen(str);
    printf("String Length: %d ", length);
    }
//Count the vowels and consonant
    vowels = 0;
    cons = 0;

    for(n=0; n<length; n++)
    if(str[n] =='a' || str[n]=='e' || str[n]=='i' || str[n]=='o' || str[n]=='u' || str[n]=='A' || str[n]=='E' || str[n]=='I' || str[n]=='O' || str[n]=='U')
        {
            vowels++;
        }
        else if((str[n]>='a' && str[n]<='z') || (str[n]>='A' && str[n]<='Z'))
        {
            cons++;
        }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", cons);
}

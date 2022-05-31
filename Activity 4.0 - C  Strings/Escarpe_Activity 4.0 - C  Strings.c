/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a Program that takes a string from the user input and converts the vowels into Uppercase.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    int n, vow, cons;
    n=vow=cons=0;

    printf("Input sentence: ");
    gets(str);

    for(n=0; str[n]!='\0'; n++)
        {
        if(str[n]=='a' || str[n]=='e' || str[n]=='i' || str[n]=='o' || str[n]=='u'){
            str[n]=toupper(str[n]);
            vow++;
        }
        else
        cons++;
    }
    while(str[n]!='\0'){
        if(str[n]=='a' || str[n]=='e' || str[n]=='i' || str[n]=='o' || str[n]=='u'){
            vow++;
        }
        n++;
    }
    printf("String converted: ");
    puts(str);
    printf("String length: %d", n);
    printf("\nVowels: %d", vow);
    printf("\nConsonants: %d", cons);

return 0;
}

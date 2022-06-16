/*ESCARPE, VANESSA T. BSIT 1A T116
Write a program that appends multiple lines in a text file
+ User must input how many lines to be appended
+ if the text file doesn't exist, the program will create the text file*/

#include <stdio.h>
int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];

printf("Input the file location: ");
scanf("%s",fname);
    fptr = fopen(fname, "a");
     printf("Input how many lines to be appended: ");
    scanf("%d", &n);
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);
}

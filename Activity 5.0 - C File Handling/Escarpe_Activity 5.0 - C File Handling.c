/*ESCARPE, VANESSA T.
Write a program that appends multiple lines in a text file
+ User must input how many lines to be appended
+ if the text file doesn't exist, the program will create the text file*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20]="test.txt";
  char str1;

    printf("File location: D:/New folder/BSIT 1A SECOND SEM/COMPUTER PROGRAMMING 2/CODE/Activity 5.0 - C File Handling\n");
	printf("Input how many lines to be appended: ");
	scanf("%d", &n);
	fptr = fopen (fname,"w+");
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
  fclose (fptr);

	fptr = fopen (fname, "r");
	printf("\n 'Inside of the text.txt' \n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
    return 0;
}

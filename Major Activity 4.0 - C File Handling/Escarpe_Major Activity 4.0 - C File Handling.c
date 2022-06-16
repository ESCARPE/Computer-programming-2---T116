/*ESCARPE, VANESSA T. BSIT 1A T116
Write a code where the user can input multiple numbers of students (n) and output them into separate files.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char name[90];
    int g1, g2, g3, id, num;
    int n, sum = 0, average = 0;

    char string[200];
    char fname[50];

    printf("Enter number of students: ");
    scanf("%d", &num);
    for (n = 0; n < num; n++)

    {

    printf("Enter file name: ");
    scanf("%s", fname);
    fptr = fopen(fname, "w");
    fgets(string, sizeof string, stdin);
    fputs(string, fptr);

      printf("Student%d \nEnter name: ", n+1);
      fgets(name, sizeof name, stdin);

      printf("Enter Student ID number: ");
      scanf("%d", &id);

      printf("Enter Math Grade: ");
      scanf("%d", &g1);

      printf("Enter Science Grade: ");
      scanf("%d", &g2);

      printf("Enter English Grade: ");
      scanf("%d", &g3);

      printf("Data written succesfully!\n");

      sum = g1 + g2 + g3;
      average = (g1 + g2 + g3) / 3;

    fprintf(fptr, "\nStudent Name: %s", name);
    fprintf(fptr, "\nStudent ID number: %d", id);
    fprintf(fptr, "\nMath Grade: %d", g1);
    fprintf(fptr, "\nScience Grade: %d", g2);
    fprintf(fptr, "\nEnglish Grade: %d", g3);
    fprintf(fptr, "\nTotal Grade: %d", sum);
    fprintf(fptr, "\nGrade Average: %d", average);
  	}

   fclose(fptr);
   return 0;
}

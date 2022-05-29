/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a program that accepts an integer and converts it to
the appropriate letter grade in the table provided. The input
should be greater than 0 but less than or equal to 100.*/

#include<stdio.h>
int main()
{
    int grade;

    printf("\n\n LETTER GRADE EQUIVALENT \n");
    printf("\nEnter grade: ");
    scanf("%d",&grade);

    if(grade >= 92 && grade <= 100) {
        printf("\nYour letter grade is A.");
        }
    else if(grade >= 84 && grade <= 91) {
        printf("\nYour letter grade is A-.");
        }
    else if(grade >= 76 && grade <= 83) {
        printf("\nYour letter grade is B.");
        }
    else if(grade >= 68 && grade <= 75) {
        printf("\nYour letter grade is B-.");
        }
    else if(grade >= 60 && grade <= 67) {
        printf("\nYour letter grade is C.");
        }
    else if(grade >= 50 && grade <= 59) {
        printf("\nYour letter grade is D.");
        }
    else if(grade >= 1 && grade < 50) {
        printf("\nYour letter grade is F.");
        }
    else {
        printf("\nInvalid input. Try again.");
        }
}

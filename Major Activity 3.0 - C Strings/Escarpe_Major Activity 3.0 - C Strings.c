/* Escarpe, Vanessa T. BSIT 1-A T116
Create a program that reverses the word order on the inputted data from the user.*/

#include <stdio.h>
#include <string.h>

int main()
{

  	char arr[500];
  	int a, b, len, str, fin;


  	printf("Enter any String : ");
  	scanf("%[^\n]s", arr);

  	//reads the length of the string and assign to variable 'len'
  	len = strlen(arr);
  	fin = len - 1;


  	printf("Reverse ordered words: \n");

  	//for loop to sort words and spaces
  	for(a = len - 1; a >= 0; a--)
	{
	    // condition that read spaces
		if(arr[a] == ' ' || a == 0)
		{
			if(a == 0)
			{
				str = 0;
			}
			else
			{
				str = a + 1;
			}

			// condition that reverse the stored value
			for(b = str; b <= fin; b++)
			{
				printf("%c", arr[b]);
			}
			fin = a - 1;
			printf(" ");
		}
	}

  	return 0;
}

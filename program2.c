/*
Oscar Esparza
22 September 2017
CSC 60
Input : stream of char
Output : # of vowels
*/

#include <stdio.h>
int main()
{
	int count = 0;
	char c;

	printf("Enter a word : ");
	c = getchar(); // gets the first chartacter
	// loops until ENTER is pressed
	while (c != '\n')
	{
		if((c == 'a') || (c == 'A'))
			count++;
		else if ((c == 'e')||( c == 'E'))
			count++;           
		else if ((c == 'i') || (c == 'I'))
			count++;
		else if ((c == 'o') || (c == 'O'))
			count++;
		else if ((c == 'u') || (c == 'U'))
			count++;

		c = getchar();
	}
	// output
	printf("There are %d vowels in that line!\n",count);
}

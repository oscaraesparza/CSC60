/*
 * Oscar Esparza
 * 23 September 2017
 * CSC 60
 * Input : Line of char
 * Output : Vowel Frequency
*/

#include <stdio.h>
int main(void)
{
	char c;
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int nonv = 0;

	printf("Enter a line : ");
	c = getchar();
	// counts vowels
	while (c != '\n')
	{
		switch (c)
		{
			case 'a' :
			case 'A' :
				a++;
				break;
			case 'e' :
			case 'E' :
				e++;
				break;
			case 'i' :
			case 'I' :
				i++;
				break;
			case 'o' :
			case 'O' :
				o++;
				break;
			case 'u' :
			case 'U' :
				u++;
				break;
			default :
				nonv++;			
		}
		c = getchar();
	}
	// output
	printf("Here is the vowel count :\nA or a : %d\nE or e : %d\n"
	       "I or i : %d\nO or o : %d\nU or u : %d\n\n", a, e, i,
		o, u);
}  

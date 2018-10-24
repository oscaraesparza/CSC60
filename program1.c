#include <stdio.h>
//Oscar Esparza
//9 September 2017
//Program 1
//Input: number  1 - 1000
//Output: Sum of 1 to number
int main()
{
	int sum = 0;
	int num = 0;

	printf("Choose a # from 1 - 1000 : ");
	scanf("%d",&num);
	
	// Makes sure the input is in valid range
	while(num > 1000)
	{
		printf("\nIncorrect input, 1-1000 : ");
		scanf("%d", &num);
	}

	// Math is done here
	for(int i = 1; i <= num; i++)
	{
		sum  += i;
	} 
	
	printf("\nThe sum of 1 to %d is %d\n\n", num, sum);
	return 0;
}

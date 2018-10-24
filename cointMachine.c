#include<stdio.h>
/* #################################################
 * Oscar Esparza
 * 9/15/17
 * CSC 60
 * input : Pennies
 * Output : Quarters, Dimes, Nickles & pennies
 * */

int main(void)
{
	int quarters, dimes, nickles, pennies;
	
	printf("\nHow many pennies do you have? <Enter 0 to quit>: ");
	scanf("%d", &pennies);

	while (pennies != 0)
	{
		quarters = pennies / 25;
		pennies = pennies % 25;

		dimes = pennies / 10;
		pennies = pennies % 10;

		nickles = pennies / 5;
		pennies = pennies % 5;

		printf("Your change is :\n%d Quarters\n%d Dimes\n%d Nickles\n%d Pennies",
		       quarters, dimes,nickles, pennies);

		printf("\nHow many pennies to you have? <Enter 0 to quit>: ");
		scanf("%d", &pennies);
	}
	
	printf("Looks like you are out of pennies\nGoodbye\n");

	return 0;
}

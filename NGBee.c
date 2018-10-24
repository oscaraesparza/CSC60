/* Oscar A. Esparza
 * 29 September 2017
 * National Geografic Bee
 * Randomize 5 Questions 
 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int question(int q, int s);
int main(void)
{
	srand(time(NULL));

	int userResponse, qOne, qTwo, qThree, qFour, qFive; //no arrays
	int score = 0;

	qOne = (rand() % 5) + 1;
	qTwo = (rand() % 5) + 1;
	while(qOne == qTwo)
		qTwo = (rand() % 5) + 1; 
	
	qThree = (rand() % 5) + 1;
	while((qOne == qThree) || (qTwo == qThree))
		qThree = (rand() % 5) + 1;
		
	qFour = (rand() % 5) + 1;
	while((qOne == qFour) || (qTwo == qFour) || (qThree == qFour))
		qFour = (rand() % 5) + 1;
	
	qFive = (rand() % 5) +1; 
	while((qOne == qFive) || (qTwo == qFive) || (qThree == qFive) || (qFour == qFive))
		qFive = (rand() % 5) + 1;
	// Test for Randomess
	//printf("%d%d%d%d%d",qOne,qTwo,qThree,qFour,qFive);
	printf("Question 1: ");
	score = question(qOne, score);
	printf("Question 2: ");
	score = question(qTwo, score);
	printf("Question 3: ");
	score = question(qThree, score);
	printf("Question 4: ");
	score = question(qFour, score);
	printf("Question 5: ");
	score = question(qFive, score);

	printf("Your score is %d/5 which is a %.0f%\n", score, ((float)score/5) * 100);
	return 0;
}

int question(int q, int s)
{
	int answer;
	switch(q)
	{
		case 1:
			printf("What is the capital of USA?\n1. Atlanta\n2. Washinton DC\n"
			       "3. New York\n4. Chicago\n");
			scanf("%d", &answer);
			if(answer == 2)
			{
				printf("Good Job.\n");
				s++;
			}		
			else
				printf("Sorry that is wrong.\n");
			break;
		case 2:
			printf("Where is Louisiana?\n1. Canada\n2. France\n3. USA\n4. Mexico\n");
			scanf("%d", &answer);
			if(answer == 3)
			{
				printf("Goof Job.\n");
				s++;
			}
			else
				printf("Sorry that is wrong.\n");
			break;
		case 3:
			printf("What is the capital of United Kingdom?\n1. London\n2. Scotland\n"
			       "3. Birmingham\n4. Heathrew\n");
			scanf("%d", &answer);
			if(answer == 1)
			{
				printf("Good Job.\n");
				s++;
			}
			else 
				printf("Sorry that is wrong.\n");
			break;
		case 4:
			printf("What is the capital of New York?\n1. Syracuse\n2. Albany\n3. "
			       "Buffalo\n4. New York City\n");
			scanf("%d", &answer);
			if(answer == 4)
			{
				printf("Good Job.\n");
				s++;
			}
			else
				printf("Sorry that is wrong.\n");

			break;
		case 5:
			printf("Where is Los Angeles?\n1. California\n2. San Diego\n"
			       "3. Nevada\n4. Utah\n");
			scanf("%d", &answer);
			if(answer == 1)
			{
				printf("Good job.\n");
				s++;	
			}
			else
				printf("Sorry that is wrong.\n");
			break;
		default:
			break;
	}
	return s;
}	 			
	
	
		

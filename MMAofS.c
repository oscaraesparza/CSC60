/* Oscar A. Esparza
 * 30 September 2017
 * CSC 60
 * Max, Min, & Avg of scores
 */

#include<stdio.h>
int main(void)
{
	 int StudentScores[][4] =
	{
		{95,85,75,65},
		{94,84,74,},
		{93,83}
	};
	int row = 3;
	int col = 4;
	int min = 9999;
	int max = 0;
	float  avg = 0;
	int tot = 0;
	int count = 0;
	

	for(int i = 0; i < row; i++)
	{
		for(int j = 0; i < col; j++)
		{
			if(StudentScores[i][j] == 0)
		 		break; 
			if(StudentScores[i][j] > max)
				max = StudentScores[i][j];

			if(StudentScores[i][j] < min)								min = StudentScores[i][j];
			tot += StudentScores[i][j];
			count++;
			
		}
			
	}
	avg = ((float)tot/count);
	printf("Max Score : %d \nMin Score : %d\nAvg Score : %.2f\n", max, min, avg);
	
	return 0;
}		

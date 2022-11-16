#include<stdio.h>
#define NUMBER 5
#define SUBJECT 3
int main(void)
{
	int i;
	int j;
	int score[NUMBER][SUBJECT];
	double total[NUMBER];
	for(i=0; i<NUMBER; i++)
	{
		printf("%d번 학생의 수학, 영어, 과학 성적을 입력해주세요.",i+1);
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);	
	}
	for(i=0; i<NUMBER; i++)
	{
		for(j=0; j<SUBJECT; j++)
		{
			total[i] += score[i][j];
		}
		total[i] /= SUBJECT;
		printf("%d번의 평균은 %.2f입니다.\n", i+1,total[i]);
	}
	
	
	return 0;
}

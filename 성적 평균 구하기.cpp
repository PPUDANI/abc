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
		printf("%d�� �л��� ����, ����, ���� ������ �Է����ּ���.",i+1);
		scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);	
	}
	for(i=0; i<NUMBER; i++)
	{
		for(j=0; j<SUBJECT; j++)
		{
			total[i] += score[i][j];
		}
		total[i] /= SUBJECT;
		printf("%d���� ����� %.2f�Դϴ�.\n", i+1,total[i]);
	}
	
	
	return 0;
}

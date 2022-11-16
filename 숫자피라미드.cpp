#include<stdio.h>
int piramid(int a)
{
	int i, j;
	for(i=0;i<a;++i){
	    for(j=0;j<=i;j++){
	    	printf("%d",j+1);
		}
		printf("\n");
	}
}
int main(void)
{
	int a;
	printf("숫자를 입력해 주세요.");
	scanf("%d",&a);
	piramid(a); 
	return 0;
} 

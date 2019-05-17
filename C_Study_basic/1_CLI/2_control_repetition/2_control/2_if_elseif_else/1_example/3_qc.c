#include <stdio.h>

void main(){
	int number_1;
	int number_2=0;
	int number_3=0;
	int number_4=0;
	int result=0;
	
	printf("순서대로 점수를 입력하세요: \n");
	scanf("%d %d %d", &number_2, &number_3, &number_4);

	result=(number_2+number_3+number_4)/3;
	if(result>=90)
		printf("A");
		else if(result>=80 && result<90)
		printf("B");
	
		else if(result>=70 && result<80)
		printf("C");
	
		else if(result>=60 && result<70)
		printf("D");

		else
		printf("F");	
		
	
}


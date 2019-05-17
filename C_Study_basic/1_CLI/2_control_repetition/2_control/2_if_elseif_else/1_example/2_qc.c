#include <stdio.h>

void main(){
	int number_1;
	int number_2;
	int result=0;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &number_1, &number_2);

	result = number_2-number_1;
	if(number_1<number_2){
		printf("%d-%d=%d", number_2, number_1,result);
	}

	else if(number_1>number_2){
		printf("%d-%d=%d", number_1, number_2,number_1-number_2);
		
	}
	
}


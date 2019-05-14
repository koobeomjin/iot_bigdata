#include <stdio.h>

void main(){
	int num1=0;
	int limit=0;
	int result=0;

	printf("1 이상의 정수 5개를 입력하세요: \n");

	while(limit < 5){
		printf("정수를 입력하세요: ");
		scanf("%d", &num1);
		limit++;
		while(num1 < 1){
			printf("1 이상의 정수만 입력하세요: ");
			scanf("%d", &num1);
		}
	result = (num1+result);
	}
	printf("입력하신 정수의 총 합은 %d입니다.\n", result);
}

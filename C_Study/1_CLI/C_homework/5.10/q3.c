#include <stdio.h>

void main(){
	int total=0;
	int input_num=0;
		
	printf("아무런 수를 입력하세요: ");
	scanf("%d", &input_num);
	do{
		total = total + input_num;
		printf("정수 입력(0 to quit): ");
		scanf("%d", &input_num);
		}while(input_num > 0);
		printf("합계: %d \n", total);
}

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main(){
	int number_of_input;
	int* number_warehouse;
	int index;

	printf("전체 입력 개수를 설정하세요: ");
	scanf("%d", &number_of_input);

	number_warehouse = (int *)malloc(sizeof(int)) * number_of_input;

	for(index=0;index<number_of_input;index++){
		printf("%d] 수를 입력하세요: ");
		scanf("%d", &input_number);
	}
}

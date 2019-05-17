#include <stdio.h>

void main(){
	int number_1;
	int number_2;
	int abs;

	printf("두 개의 정수를 입력하세요:");
	scanf("%d %d", &number_1, &number_2);
		abs = number_1<number_2 ? number_2-number_1:number_1-number_2;

		printf("%d", abs);
			
	}


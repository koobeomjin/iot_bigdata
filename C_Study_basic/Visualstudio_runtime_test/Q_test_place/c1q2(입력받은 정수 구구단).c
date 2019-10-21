#include <stdio.h>
#pragma warning(disable:4996)

void Num2Num1(int num1, int num2) {
	int mt;

	for (num1; num1 < num2+1; num1++) {
		for (mt = 1; mt < 10; mt++) {
			printf("%d x %d = %d \n", num1, mt, (num1*mt));
		}
		printf("\n");
	}
}

void Num1Num2(int num1, int num2) {
	int mt;

	for (num2; num2 < num1 + 1; num2++) {
		for (mt = 1; mt < 10; mt++) {
			printf("%d x %d = %d\n", num2, mt, (num2 * mt));
		}
		printf("\n");
	}
}

void main() {
	int num1 = 1, num2 = 1;

	printf("구구단 변환용 정수 2개를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 > num2) {
		Num1Num2(num1,num2);
	}
	if (num2 > num1){
		Num2Num1(num1, num2);
	}
}
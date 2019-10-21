#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int index=0;

	printf("10진수를 입력하면 16진수로 변환시켜 드리겠습니다 : \n");
	scanf("%d", &index);

	printf("입력하신 10진수의 16진수 변환결과: %x \n", index);
}
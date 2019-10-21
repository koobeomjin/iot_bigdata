#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int input;
	int num1 = 0;
	int num2 = 0;
	int result = 1;

	printf("정수를 입력하세요: ");
	scanf("%d", &input);

	for (; num2 < input; num2++)
	{
		result =  result * 2;
	}
	printf("%d의 %d승은 %d", num1, input, result);
}
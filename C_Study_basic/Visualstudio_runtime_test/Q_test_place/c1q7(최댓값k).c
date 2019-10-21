#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, n, k;

	printf("정수 입력 : ");
	scanf("%d", &n);

	for (i = 1, k = 0; i <= n; k++)
	{
		i = i * 2;
	}

	printf("공식을 만족하는 k의 최댓값은 %d \n", k - 1);
}
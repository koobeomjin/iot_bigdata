#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, n, k;

	printf("���� �Է� : ");
	scanf("%d", &n);

	for (i = 1, k = 0; i <= n; k++)
	{
		i = i * 2;
	}

	printf("������ �����ϴ� k�� �ִ��� %d \n", k - 1);
}
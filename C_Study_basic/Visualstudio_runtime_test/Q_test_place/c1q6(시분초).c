#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int h = 0, m = 0, s;

	printf("초를 입력하세요: ");
	scanf("%d", &s);

	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;

	printf("[h : %d, m : %d, s : %d]", h, m, s);
}
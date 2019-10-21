#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num = 2;
	for (int i = 0; i < 10; num++)
	{
		int j;
		for (j = 2; j * j <= num; j++) {
			if (num % j == 0) {
				break;
			}
		}
		if (j * j > num) {
			i++;
			printf("%d ", num);
		}
	}
}
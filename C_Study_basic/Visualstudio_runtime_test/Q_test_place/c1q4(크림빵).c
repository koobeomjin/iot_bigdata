#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int total = 3500;
	int cream = 500;
	int creamax;
	int shrimp = 700;
	int shrimax;
	int coke = 400;
	int cokemax;

	for (creamax = 1; creamax < total/cream; creamax++)
	{
		for (shrimax = 1; shrimax < total/shrimp; shrimax++)
		{
			for (cokemax = 1; cokemax < total/coke; cokemax++)
			{
				if (total == creamax * cream + shrimax * shrimp + cokemax * coke)
				{
					printf("ũ����: %d��, �����: %d��, �ݶ�: %d��\n", creamax, shrimax, cokemax);
				}
			}
		}
	}
}
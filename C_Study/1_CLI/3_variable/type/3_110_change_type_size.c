#include <stdio.h>

// ���� : char, short type�� ��� ����� �������� ��ȭ Ȯ��
int main(){
	char num1=1, num2=2, result1=0;
	short num3=300, num4=400, result2=0;
	char test_num1=100, tst_num_2=11, test_num1m reullt

	printf("size of num1: %d, num2: %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3: %d, num4: %d\n", sizeof(num3), sizeof(num4));

	// char, short �迭�� Ÿ���� ��� ������ expression(ǥ����)���θ� ������� ��쿡��
	// �ش� Ÿ�Ժ��� �� ū Ÿ���� �ӽú���(Temporary Variable)�� ���������� �����ȴ�.
	// �� �ӽ� ������ ���α׷������� ������ �ʰ� �����Ϸ��� ������ ���� �����Ѵ�.
	// ���� : ����ӵ��� ������.
	// ���� : �޸� ���� �ʷ��ȴ�. �������� ��������. ��
	printf("size of char add: %d \n",sizeof(num1+num2));
	printf("size of short add: %d \n",sizeof(num3+num4));

	// ���� ����� ���� Ÿ���� ������ ������ ��쿡�� ������ Ÿ�� ����� �����Ѵ�.
	// ���� : �޸𸮸� ����ȭ �� �� �ִ�. �������� �⤵�Ƶȴ�. ������� �����ϴ�.
	// ���� : ����ӵ��� ��������� ���� �� �ִ�.(�ݺ������� ����Ǵ� ���� 
	// 		  
	result1 = num1+num2;
	result2 = num3+num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));
}

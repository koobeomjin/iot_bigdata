#include <stdio.h>
/*
  d: ��ȣ�� �ִ� 10���� ����(char, short, int �迭)
 ld: long
lld: long long
  u: ��ȣ ���� 10���� ���� (unsigned int)
  f: float, double
 Lf: long double
 */
  


void main(){
	int int_max=2147483647;
	int int_max_test=2147483648;
	signed int sint_max=2147483647;
	unsigned int uint_max=4294967295;
	unsigned uint_max2=4294967295;
	float f_test=1.12345678901234567890;
	long double ld_test=1.12345678901234567890;

	printf("int �ִ밪 : %d\n", int_max);
	// visual studio 2019 �����Ϸ����� int�� 4byte�� ó���ϱ� ������
	// 2,147,483,647 �̻��� �Ӱ��� ǥ���� �� ����.
	printf("int_max + 1 : %d\n", int_max_test);
	printf("signed int �ִ밪 : %u\n", sint_max);
	printf("unsigned int �ִ밪 : %u\n", uint_max);
	printf("unsigned �ִ밪 : %u\n", uint_max2);

	printf("float ���е� :%.25f\n",f_test);
	printf("long double ���е� :%.25lf\n", ld_test);

}

#include <stdio.h>
// sizeof ������ : ����� ���� �Ǵ� �������� Byte��
// typedef char LG_char <= ����� ���� Ÿ�� 
// typedef char LG_small_num <= ����� ���� Ÿ�� 
int main(){
	// int, char, short <= ���� Ÿ��(native type)
	
	char c_number=9; // c_ <= �ش� ������ Ÿ���� ������ �� �ִ� prefix�̴�.
	int i_number=1052;
	double d_number=3.1415;

	//���� ������ ���ϱ�
	printf("=========== ������ ������ ���ϱ� ===========\n");
	printf("���� c_number�� ũ��: %d \n", sizeof(cnumber));
	printf("���� i_nnumber�� ũ��: %d \n", sizeof(inumber));
	printf("���� d_number�� ũ��: %d \n", sizeof(dnumber));

	//���� type�� ������ ���ϱ�
	printf("=========== ������ ������ ���ϱ� ===========\n");
	printf("char�� ũ��: %d\n", sizeof(char));
	printf("signed char�� ũ��: %d\n", sizeof(signed char));
	printf("unsigned char�� ũ��: %d\n", sizeof(unsigned char));

	printf("int�� ũ��: %d\n", sizeof(int));
	printf("signed int�� ũ��: %d\n", sizeof(signed int));
	printf("unsigned int�� ũ��: %d\n", sizeof(unsigned int));

	
	printf("float�� ũ��: %d\n", sizeof(float));

	printf("short�� ũ��: %d\n", sizeof(short));
	printf("signed short�� ũ��: %d\n", sizeof(short int));
	printf("unsigned short�� ũ��: %d\n", sizeof(signed short));

	printf("long�� ũ��: %d\n", sizeof(long));
	printf("signed long�� ũ��: %d\n", sizeof(signed long));
	printf("unsigned long�� ũ��: %d\n", sizeof(unsigned long));
}

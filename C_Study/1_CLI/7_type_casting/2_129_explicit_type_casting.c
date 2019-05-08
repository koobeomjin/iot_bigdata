#include <stdio.h>

void main(){
	int numerator=3;
	int denominator=4;
	double result;
	int i_result;

	// R-Value�� ����/������ ����� �����̴�
	// L-Value�� �Ǽ��̴�.
	// �� ��쿡 R-Value�� Impicit Type Casting�� �̷�� ����.
	// ������ �������� ������ ������ �Ҽ��� ���ϰ� ���õȴ�.
	// ���� �������� �����̶� �� ���� ������ �ս��� �������� ����ȯ�� �ʿ��ϴ�.
	// result = numerator/denominator;
	
	// Explicit Type Casting (���� ����ȯ)
	// ����: (���̸�)[���/����/ǥ����]
	// �Ʒ� ���� numerator ������ ���� ����ȯ �Ǿ�����, ���� �Ǽ��� �������� ������
	// �ǹǷ� ������ ������ denominator�� ������ ����ȯ(Implicit Type Csating)�� �Ͼ��.
	// result= (double)numerator/denominator;

	// Case2] ���� ����ȯ�� �ݴ��� ����
	result = numerator/(double)denominator;

	printf("������ ���: %f \n", result);

	// L-Value�� ���� R-Value�� �Ǽ��� ��쿡�� L-Value���� Impicit Type Casting��
	// �̷������ �ʴ´�. ������ Ÿ��  ��ü�� �ٲ� �� ���� �����̴�.
	// �� ���� �������� �ս���(Data Loss) �����ؾ� �Ѵ�.
	i_result = numerator/(double)denominator;
	printf("������ ���: %d \n", i_result);
}

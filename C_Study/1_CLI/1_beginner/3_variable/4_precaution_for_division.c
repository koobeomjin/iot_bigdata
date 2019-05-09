#include <stdio.h>

void main(){
	int numerator=2;
	int denominator=1;

	int float_numerator=23;
	int float_denominator=47;

//	int num1; <= ���������ν� ������(readibility)�� ��������.
//	int num2;
	// �������� ����� ���������� ��µȴ�.
	printf("%d/%d=%d\n", numerator,denominator, numerator/denominator);

	// �� �� ������ ������ ���� ������ ���� ������ �տ�
	// Ÿ���� ������ �ʿ䰡 ����.
	numerator = 1;
	denominator = 2;

	printf("%d/%d=%d\n", numerator,denominator, numerator/denominator);

	// �Ʒ� �ڵ�� %f������ ������ ����� �����̱� ������ compile��
	// �Ʒ�warning �޼����� ����Ѵ�.
	// warning C4477: 'printf' : ���� ���ڿ� '%f�� 'double' ������ �μ��� �ʿ������� variadic �μ� 3�� ������ 'int'�Դϴ�.
	// printf("%d/%d=%f\n", numerator,denominator, numerator/denominator);

	// ���� ���� ����� float�� Ÿ��ĳ����(type casting) �õ�
	// �����Ϸ��� ���� warning, compile error �Ǵ� runtime error�� ���� �� ������
	// ������ ����� �ܼ��� ��ȯ�����Ƿ� �սǵǴ� ���� �����Ѵ�.
	printf("%d/%d=%f\n", numerator,denominator, (float)(numerator/denominator));
	
	// ����, �и��� ���� float�� ����ȯ�߱� ������ ������ ����� float�̴�.
	// ���� �սǵǴ� ���� ����.
	printf("%d/%d=%f\n", numerator,denominator, (float)numerator/(float)denominator);

	// ����, �и� ��� float�� ������ ����߱� ������ ����ȯ�� �ʿ����
	// �սǵǴ� ���� ����.
	printf("%f/%f=%f\n", float_numerator,float_denominator, float_numerator/float_denominator);



}

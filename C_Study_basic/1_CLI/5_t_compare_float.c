#include <stdio.h>

void main(){
	float my_pi=3.141592;

	// Foating Type(float, long double..) ������
	// == �����ڷ� ���ϴ� ���� 100% True�� �̲��� �� �� ����.
	// Floating Type ������ ���� ����Ǵ� ���� �ƴ϶� ������ ����Ǳ�
	// �����̴�. 90P ����
	if(my_pi == 3.141592)
			printf("Correct Pi!");

	printf("my_pi: %f\n", my_pi);
	printf("my_pi: %.10lf\n\n", my_pi);
}

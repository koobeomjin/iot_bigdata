#include <stdio.h>

void main(){
	int num, abs;

	printf("���� �Է�: ");
	scanf("%d", &num);

	// ? <= ���׿�����(Tenary Operator)
	// [���|����|���ǽ�] ? ���ɹ�1 : ���ɹ�2;
	// Step1] ? ���� [���|����|���ǽ�]�� ���Ѵ�.
	// Case1] Step1�� ����� ���̸� ���ɹ�1�� �����Ѵ�.
	// Case2] Step2�� ����� �����̸� ���ɹ�2�� �����Ѵ�.
	// ����: ������ �ǿ����ڷ� ������ ó����� �����ϰ� ���α׷��� �� �� �ִ�.
	// ���� 
	// -�� ���� ���ɹ�(Statement)�� ó���ϴµ� �����ϴ�. ���� ������ ���ɹ��� ǥ���� �� ����.
	// -�Ӻ���� ȯ�濡���� �Ϲ������� ������� �ʵ��� �ǰ��ϰ� �ִ�.
	abs = num>0 ? num:num*(-1);

	/*�� ���α׷��� �Ʒ��� ����.
	if (num>0){
		abs = num;
	}else{
		abs = num*(-1);
	}
	*/

	printf("����: %d \n", abs);

}

#include <stdio.h>

void main(){
	unsigned long long my_password=123321123321123321;
	unsigned long long input_password=0;

	printf("Password�� �Է��ϼ���. (19�ڸ� �̳�): ");
	scanf("%lld", &input_password);

//	if(123321123321123321 == input_password){
	if(my_password == input_password){
		printf("Password�� ��ġ�մϴ�. ���� �����մϴ�.\n");
		printf("���� ����Ǿ� �ִ� Password�� %lld�Դϴ�.\n",my_password);
	}else{
		printf("Password�� ����ġ�մϴ�. ���ư�����.\n");
	}
	
}

#include <stdio.h>

void main(){
	const int my_password=1768012;
	const unsigned char max_count=3;
	const unsigned char iot_true=1;
	const unsigned char iot_false=0;
	int input_count=0;
	int input_password=0;
	// is_�ǹ� <= flag ���� Ư�� �̺�Ʈ�� ����Ǿ����� Ȯ���Ͽ��� �뵵�� ����ϴ� ����
	int is_verified=iot_false;

	for( ;input_count<max_count;input_count++){
		printf("�н����带 �Է��ϼ���: ");
		scanf("%d", &input_password);

		if(my_password == input_password){
			printf("IoT �����͹� ���尡���մϴ�.\n");
			is_verified = iot_true;
			break;
		}
	}
	// single if�� �ùٸ��� ����� ��
	if(is_verified == iot_false){
		printf("\n�н����� �ִ� �Է� Ƚ�� %d�� �ʰ��Ͽ����ϴ�.\n", max_count);
		printf("�����Ƿ� Ȯ������ ��Ź�մϴ�.");
	}
	// ���࿡ �Ʒ��� ���� �ڵ尡 �߰��� �ȴٸ� �̴� ����� ����� single if�� �ƴϴ�.

	if(is_verified == iot_true){
		printf("\n ����Ϸ��Ͽ����ϴ�.");
	}
}


#include <stdio.h>

void main(){
	char unsigned char iot_true=1;
	char unsigned char iot_false=0;
	char condition_A=iot_true;
	char condition_B=iot_true;
	char condition_C=iot_false;
	char condition_D=iot_false;

	//��ø�� if (nested if)
	if(condition_A == iot_true){
		if(condition_B == iot_true){
			if(condition_C == iot_true){
				if(condition_D == iot_true){
					printf("���� �����ϱ� ����� �����Ͽ� ����Ǵ� �ڵ�!\n");
				}
			}
		}
	}
	// ��ø�� if�� ������ �Ʒ��� ���� && ���� �����ڷ� �ܼ�ȭ ��ų �� �ִ�.
	// �������� ���α׷��ֿ� �ڽ��� ������ ���߿� ��ƾ�Ŀ﷯ �����丵 �̷��͵� ������ ������.
	if(condition_A == iot_true && condition_B == iot_true && condition_C == iot_false && condition_D == iot_false){
		printf("���� �����ϱ� ����� �����Ͽ� ����Ǵ� �ڵ�!\n");
	}
	if(condition_A == iot_true){
		printf("condition A: %d\n", condition_A);
		
		if(condition_B == iot_true){
			condition_D = ! condition_D;
			if(condition_C == iot_true){
				condition_A = ! condition_A;
				printf("condition c: %d\n", condition_C);
				if(condition_D == iot_true){
					printf("���� �����ϱ� ����� �����Ͽ� ����Ǵ� �ڵ�!\n");
				}
			}
		}
	}
}


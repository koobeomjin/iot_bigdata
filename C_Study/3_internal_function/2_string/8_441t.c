#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
//����ڷκ��� �н����带 �Է¹޾Ƽ� ��ġ�ϸ� �α��� �޼��� ���
//��ġ���� ������ ��� �޼����� �Բ� 3ȸ���� �н����带 �Է¹ް���

void main() {
	const char* my_password = "bbt1672";
	char input_password[30];
	int index;
	const int max_count = 3;

	for (index = 0; index < max_count; index++) {
		// printf("��й�ȣ�� �Է��ϼ���: ");
		fputs("��й�ȣ�� �Է��ϼ���: ", stdout);
		// scanf("%s", input_password);
		gets(input_password);

		if (!strcmp(my_password, input_password)) {
			puts("��й�ȣ�� ��ġ�մϴ�.");
			puts("�α����մϴ�.");
			break;
		}
		else {
			printf("��й�ȣ�� %dȸ ����ġ�մϴ�.", index + 1);
			if (index == 2) {
				printf("%dȸ ����ġ �Ǿ����Ƿ� ������ �ӽ� ��װڽ��ϴ�.\n", index + 1);
				puts("���� �߰� ������ ���Ͽ� ��й�ȣ �缳���� ���ּ���.");
				break;
			}
			puts("�ٽ� �Է��ϼ���.");
		}

	}

}

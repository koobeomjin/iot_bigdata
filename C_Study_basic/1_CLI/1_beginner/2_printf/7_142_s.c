#include <stdio.h>

void main(){
	printf("�� ��	�����а�	�г�\n");
	printf("%s	%s	%s\n\n", "�� ��","�����а�","�г�");


	// 1	  2			 3			4
	// %[- �Ǵ� ����][��üũ��][���佺Ʈ��]
	// - �� ���� ����, �����ϸ� ������ ����
	// ��üũ��: ��Ī�Ǵ� ���� �����ϴ� byte����
	// ���佺Ʈ��: c, d, ll, f, lf ..
	printf("%8s %14s %5s \n", "�� ��","�����а�","�г�");
	printf("%-8s %14s %5d \n", "������","��ǻ�Ͱ���",3);
	printf("%-8s %14s %5d \n", "������","���ڰ���",1);
	printf("%-8s %14s %5d \n\n", "�ѻ��","�ɸ��а�",4);

	// ��ü ���� ����
	printf("�������� ����\n\n");
	printf("%-8s %-14s %-5s \n\n", "�� ��","�����а�","�г�");
	printf("%-8s %-14s %-5d \n", "������","��ǻ�Ͱ���",3);
	printf("%-8s %-14s %-5d \n", "������","���ڰ���",1);
	printf("%-8s %-14s %-5d \n\n", "�ѻ��","�ɸ��а�",4);

	// ��ü ������ ����
	printf("���������� ����\n\n");
	printf("%8s %14s %5s \n\n", "�� ��","�����а�","�г�");
	printf("%8s %14s %5d \n", "������","��ǻ�Ͱ���",3);
	printf("%8s %14s %5d \n", "������","���ڰ���",1);
	printf("%8s %14s %5d \n\n", "�ѻ��","�ɸ��а�",4);
	
	// ��ü �߾� ����
	printf("�߾����� ����\n\n");
	printf("%6s %15s %5s \n\n", "�̸�","�����а�  ","�г�");
	printf("%7s %14s %5s \n", " ������","��ǻ�Ͱ��� ","3 ");
	printf("%7s %14s %5s \n", " ������","���ڰ���  ","1 ");
	printf("%7s %14s %5s \n\n", " �ѻ��","�ɸ��а�  ","4 ");

}
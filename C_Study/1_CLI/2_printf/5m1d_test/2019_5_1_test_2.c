#include <stdio.h>

void main(){
	printf(" *2019�� 5�� 1�� ����\n");
	printf("  //*  */ <== ANSI 99 style �ּ�\n");
	printf("  // <== ANSI 89 style �ּ�\n");
	printf("  printf(\"%s\") <== �⺻����\n", "���ڿ�");

	printf("   Format string\n");
	printf("   print(\"%%[Format string]\", ��);\n");
	printf("  ����µ�:%d��, ��������:%f, ��Ȯ��:%d%%\n\n", 22, 0.075, 99);

	printf("   ����\t\t ��ȭ��\t\t ������\n");
	printf("     1\t    ����� �������\t  -%d\n",0);
	printf("     2\t\tĸƾ����\t  -%d\n",0);
	printf("     3\t\t  ����\t\t  +%d\n",1);
	printf("     4\t\t �̼���\t\t  %d\n",-1);
}

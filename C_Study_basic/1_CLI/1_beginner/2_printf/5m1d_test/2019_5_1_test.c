#include <stdio.h>

void main(){
	printf(" *2019�� 5�� 1�� ����\n");
	printf("  //*  */ <== ANSI 99 style �ּ�\n");
	printf("  // <== ANSI 89 style �ּ�\n");
	printf("  printf(\"%s\") <== �⺻����\n", "���ڿ�");

	printf("   Format string\n");
	printf("   print(\"%%[Format string]\", ��);\n");
	printf("  ����µ�:%d��, ��������:%f, ��Ȯ��:%d%%\n\n", 22, 0.075, 99);

	printf("   ����		��ȭ��		������\n");
	printf("     1	   ����� �������	  -%d\n",0);
	printf("     2	       ĸƾ����		  -%d\n",0);
	printf("     3		 ����		  +%d\n",1);
	printf("     4		�̼��� %d\n",-1);
}
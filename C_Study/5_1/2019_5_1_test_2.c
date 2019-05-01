#include <stdio.h>

void main(){
	printf(" *2019년 5월 1일 복습\n");
	printf("  //*  */ <== ANSI 99 style 주석\n");
	printf("  // <== ANSI 89 style 주석\n");
	printf("  printf(\"%s\") <== 기본문법\n", "문자열");

	printf("   Format string\n");
	printf("   print(\"%%[Format string]\", 값);\n");
	printf("  현재온도:%d도, 오존지수:%f, 정확도:%d%%\n\n", 22, 0.075, 99);

	printf("   순위\t\t 영화명\t\t 변동폭\n");
	printf("     1\t    어벤저스 엔드게임\t  -%d\n",0);
	printf("     2\t\t캡틴마블\t  -%d\n",0);
	printf("     3\t\t  생일\t\t  +%d\n",1);
	printf("     4\t\t 미성년\t\t  %d\n",-1);
}

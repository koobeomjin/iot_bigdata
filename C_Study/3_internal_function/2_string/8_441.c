#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char my_password[] = "bbt1672";
	char input_password[] = "bbt1672";

	if(my_password == input_password)
		puts("패스워드가 일치합니다.");
	else
		puts("패스워드가 불일치합니다.");
}

#include <stdio.h>

void main(){
	int limit;
	int index=1;

	printf("���� ���� �ϳ��� �Է��ϼ���: ");
	scanf("%d",&limit);

		while(index < limit+1){
			printf("%d \n",index*3);
			index++;
		}
}

#include <stdio.h>

void main(){
	int year=0; //���� �⵵
	int sentence_year=20;// ������
	int jailbreak_year=7;// Ż�� ���ɳ⵵
	int physical_level=0;

	printf("%d�� ������ �޾� �Լ��մϴ�.\n\n", sentence_year);
	while(1){
		year ++;
		if(year % 2 == 0){
				physical_level++;
		}
		printf("%d�� ���Ծ����ϴ�. ü��: %d \n", year, physical_level);
		if(year > jailbreak_year){
			printf("Ż��õ�!\n\n");
			if(physical_level > 5){
				break;
			}
		}
	}
	printf("%d���� Ż�⼺��!!!\n", year);

}

#include <stdio.h>

void main(){
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	//else�� ���� if �Ǵ� else if���� �ٷ��� �ʾҴ� ��� ������ �����Ѵ�.
	//��, default�� ������ ������ �ִ�.

/*	
	if(num<0){
			printf("�Է� ���� 0���� �۴�. \n");
	}
	else if(num>0){
			printf("�Է� ���� 0���� ũ��. \n");
	}
	else{
			printf("�Է� ���� 0�̴�. \n");
	}
*/
	/*
	if(num<0){
	}else if(num==0){
	}else{ //num>0
	}
*/
/*
	if(num>0){
	}else if(num==0){
	}else{ //num<0
	}
	*/
	//else
	if(num < -7){
	}else if(num > -5 && num < -3){
	}else if(num == 0){
	}else if(num > 2 && num < 10){
	}else if(num > 13 && num < 1000){
	}else{
		printf("Default Type Z�� �Ҵ�!\n");
	}
}


#include <stdio.h>
//��ɾ� ���̿� �ٹٲ� ���� ��� �Ǵ��� 
//�����ϴµ����� ������ ��ġ�� �ʴ´�.




//int Absocompare(int num1,int num2);	// ������ ū ���� ��ȯ
//int 		Absocompare(int num1,int num2);	// ������ ū ���� ��ȯ
//int Absocompare(int 		num1,int num2);	// ������ ū ���� ��ȯ
//int Absocompare(int num1,	int num2);	// ������ ū ���� ��ȯ
//int Absocompare(int num1,int num2 );	// ������ ū ���� ��ȯ
//�Լ��� ����Ÿ��, ������ ����Ÿ��, ���ڸ� ������ ������ �� ���� �͵� 
//���࿡ ������ ���� �ʴ´�.
int Absocompare( int num1,  int num2 );	// ������ ū ���� ��ȯ
int GetAbsoValue(int num);				// ���������� ������ ��ȯ

void main(){
	// ���� Ÿ��, ������ ������ ���鵵 �����ϴµ� ������ ��ġ�� �ʴ´�.
	//int num1,num2;
	//int 				num1;
	//unsigned short int	num2;
	int num1,num2;
	// �Լ��� ���� ���̿� ���鵵 ���࿡ ������ ��ġ�� �ʴ´�.
	// ��, ���ڿ������� ������ �״�� ���ڿ��� ���뿡 �ݿ��ȴ�.
	//printf( "�� ���� ���� �Է�: " );
	printf("�� ���� ���� �Է�: ");
	//scanf("%d %d", &num1, &num2);
	//�������� ���ؼ� ���ڿ� ���ڻ��̿� ������ �ִ� ���� ����.
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ����: %d \n", 
					num1 , num2, Absocompare(num1, num2));
}



int Absocompare(int num1, int num2){
//if(GetAbsoValue(num1)>GetAbsoValue(num2)){
//���� ������ ���� ���׵� �����ڿ� ������ �ϱ� ���Ͽ� ������ �ִ� ���� �������� ����.
//	if(GetAbsoValue(num1) > GetAbsoValue(num2)){
//	()�� �������� ��ø�Ǿ��� ���� �������� ���Ͽ� ������ �ִ� ���� ����.
	if( GetAbsoValue(num1) > GetAbsoValue(num2) ){
		return num1;
	}else{
		return num2;
	}
}

int GetAbsoValue(int num){
	if(num<0){
		return  num * (-1);
	}else{
		return num;
	}
}



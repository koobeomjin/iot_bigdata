#include <stdio.h>

void main(){
	int altitude=0;
	
	printf("���� �� %dm\n", altitude);

	altitude = altitude+1;
	printf("���� �� %dm\n", altitude);

	altitude += 1;
	printf("���� �� %dm\n", altitude);

	// �ڱ� �ڽ��� ���� �����߱� ������
	// ����� ���� �� �Ҵ��� �ʿ䰡 ����.
	altitude = ++altitude;
	printf("���� �� %dm\n", altitude);

	// ++�� ����(increment operator) ������
	// ���� : ++���� �Ǵ� ����++
	// ++altitude �� �ǹ��ϴ� ����
	// altititude = altitude+1�� �ǹ��Ѵ�.
	++altitude;
	printf("���� �� %dm\n", altitude);

	// ���� ����
	// ���� 1 ���� ��, ���� ������ �������� ����
	// ������ ��ó��
	printf("���� �� %dm\n", ++altitude);

	// ���� ����
	// ���� ������ ���� ������ �� ���� 1����
	// ��ó�� ������
	printf("���� �� %dm\n", altitude++);
	printf("���� �� %dm\n", altitude);

	altitude++;
	printf("���� �� %dm\n", altitude);

	// �̷��� ������ ���� �����ڿ��� �����ϰ� ����ȴ�.
	// ������ : --���� �Ǵ� ����--
	// --altitude�� �ǹ��ϴ� ����
	// altitude = altitude-1;
	--altitude;
	printf("���� �� %dm\n", altitude);

	altitude--;
	printf("���� �� %dm\n", altitude);

	printf("���� �� %dm\n", --altitude);

	printf("���� �� %dm\n", altitude--);
	printf("���� �� %dm\n", altitude);
}

//#include <stdio.h> <= Standard IO (ex: printf, scanf���� ����� �� ����.)

void main(){
	int military_serial_number=1771015698; //military_serial_number: ����, 1771015698: ���
	int my_birthday=971207;
	// const�� constant�� �ǹ��Ѵ�.(������ �ٲ��� ����)
	const int ci_military_serial_number=1771015698; // ci = const int�� �ǹ�
	const int ci_my_birthday=971207; // ci_my_birthday: const

	// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ ������
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	military_serial_number=1772022818;
	my_birthday=971207;
	my_birthday++;

	ci_military_serial_number=1234567890;
	ci_my_birthday=970217;
	ci_my_birthday++;
}

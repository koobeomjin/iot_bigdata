#include <stdio.h>
#pragma warning (disable:4996)

int compare_file(FILE* fFILE1, FILE* fFILE2) {
	int file1_read_char;
	int file2_read_char;

	while (1) {

		file1_read_char = fgetc(fFILE1);
		file2_read_char = fgetc(fFILE2);

		if (file1_read_char != file2_read_char) {
			return 0;
		}

		if (file1_read_char == EOF && file2_read_char == EOF) {
			return 1;
		}
	}
}

void main(int argc, char* argv[]) {

	FILE* fFILE1 = fopen(argv[1], "rt");
	FILE* fFILE2 = fopen(argv[2], "rt");

	if (compare_file(fFILE1, fFILE2)) {
		fputs("�� ������ ������ ��ġ�մϴ�.", stdout);
	}
	else {
		fputs("�� ������ ��ġ���� �ʽ��ϴ�.", stdout);
	}

	fclose(fFILE1);
	fclose(fFILE2);
}
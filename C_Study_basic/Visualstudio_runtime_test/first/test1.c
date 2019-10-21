#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define MAX_BOOK_NUM 3

typedef struct {
	char author[20];
	char title[20];
	char pages[10];
}BooksInfo;

int main() {
	int index;
	BooksInfo* westLibrary[MAX_BOOK_NUM];

	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		westLibrary[index] = malloc(sizeof(BooksInfo));
	}

	puts("���� ���� �Է�");

	for(index = 0; index < MAX_BOOK_NUM; index++)
	{
		fputs("����: ", stdout);
		gets(westLibrary[index]->author);
		fputs("����: ", stdout);
		gets(westLibrary[index]->title);
		fputs("������ ��: ", stdout);
		gets(westLibrary[index]->pages);
	}
	putchar('\n');
	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		printf("book %d\n����: %s\n����: %s\n������ ��: %s\n",
			index + 1, westLibrary[index]->author, westLibrary[index]->title, westLibrary[index]->pages);
	}
	for(index = 0; index < MAX_BOOK_NUM; index++)
	{
		free(westLibrary[index]);
	}
}
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

	puts("도서 정보 입력");

	for(index = 0; index < MAX_BOOK_NUM; index++)
	{
		fputs("저자: ", stdout);
		gets(westLibrary[index]->author);
		fputs("제목: ", stdout);
		gets(westLibrary[index]->title);
		fputs("페이지 수: ", stdout);
		gets(westLibrary[index]->pages);
	}
	putchar('\n');
	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		printf("book %d\n저자: %s\n제목: %s\n페이지 수: %s\n",
			index + 1, westLibrary[index]->author, westLibrary[index]->title, westLibrary[index]->pages);
	}
	for(index = 0; index < MAX_BOOK_NUM; index++)
	{
		free(westLibrary[index]);
	}
}
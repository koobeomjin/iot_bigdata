#include <stdio.h>
#pragma warning(disable:4996)

void CelToFah() {
	int cel = 0;
	int fah = 0;
	printf("¼·¾¾ ¿Âµµ: ");
	scanf("%d", &cel);
	fah = ((1.8 * cel) + 32);
	printf("È­¾¾ : %d", fah);
}

void FahToCel() {
	int fah = 0;
	int cel = 0;
	printf("È­¾¾ ¿Âµµ: ");
	scanf("%d", &fah);
	cel = ((fah-32)/1.8);
	printf("¼·¾¾ : %d", cel);
}

void main() {
	int choice = 0;

	printf("1.¼·¾¾, 2.È­¾¾ : ");
	scanf("%d", &choice);

	if(choice == 1) {
		CelToFah();
	}
	else if(choice == 2){
		FahToCel();
	}
	else {
		printf("ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.\n´ÙÀ½¹ø¿£ 1 È¤Àº 2¸¸ ÀÔ·ÂÇÏ¼¼¿ä.");
	}
}
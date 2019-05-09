#include <stdio.h>
/* ³í¸® Multi Or Áø¸®Ç¥				 Âü : 0ÀÌ ¾Æ´Ñ ¼ö
									°ÅÁþ : 0
	  					
 		AÁ¶°Ç			BÁ¶°Ç			CÁ¶°Ç			°á°ú
 		°ÅÁþ			°ÅÁþ			°ÅÁþ			°ÅÁþ
 		°ÅÁþ			 Âü				°ÅÁþ			 Âü
		 Âü				 Âü				°ÅÁþ			 Âü
		 Âü				°ÅÁþ			 Âü				 Âü
		°ÅÁþ			 Âü				 Âü				 Âü
		 Âü				 Âü				 Âü				 Âü

 */
void main(){
	int num1=10;
	int num2=12;
	int num3=15;
	int result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// °ÅÁþ || °ÅÁþ || °ÅÁþ
	result = (num1 == 5 || num2 == 10 || num3 == 14);
	printf("num1 == 5 || num2 == 10 || num3 == 14 => Æò°¡°á°ú: %d\n", result);

	// Âü || °ÅÁþ || °ÅÁþ
	result = (num1 == 10 || num2 == 10 || num3 == 14);
	printf("(num1 == 10 || num2 == 10 || num3 == 14) => Æò°¡°á°ú: %d\n", result);

	// °ÅÁþ || Âü || °ÅÁþ
	result = (num1 == 5 || num2 == 12 || num3 == 14);
	printf("(num1 == 5 || num2 == 12 || num3 == 14) => Æò°¡°á°ú: %d\n", result);

	// °ÅÁþ || °ÅÁþ || Âü
	result = (num1 == 5 || num2 == 10 || num3 == 15);
	printf("(num1 == 5 || num2 == 10 || num3 == 15) => Æò°¡°á°ú: %d\n", result);

	// Âü || Âü || °ÅÁþ
	result = (num1 == 10 || num2 == 12 || num3 == 14);
	printf("(num1 == 10 || num2 == 12 || num3 == 14) => Æò°¡°á°ú: %d\n", result);

	// Âü || °ÅÁþ || Âü
	result = (num1 == 10 || num2 == 10 || num3 == 15);
	printf("(num1 == 10 || num2 == 10 || num3 == 15) => Æò°¡°á°ú: %d\n", result);

	// °ÅÁþ || Âü || Âü
	result = (num1 == 5 || num2 == 12 || num3 == 15);
	printf("(num1 == 5 || num2 == 12 || num3 == 15) => Æò°¡°á°ú: %d\n", result);

	// Âü || Âü || Âü
	result = (num1 == 10 || num2 == 12 || num3 == 15);
	printf("(num1 == 10 || num2 == 12 || num3 == 15) => Æò°¡°á°ú: %d\n", result);
}


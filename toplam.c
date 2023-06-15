//Yazýlan sayýya kadar olan bütün sayýlarý topla.

#include <stdio.h>

int main() {

	int a;
	int i = 1;
	int toplam = 0;
	printf("Lütfen bir sayi giriniz:");
	scanf_s("%d", &a);

	while (a >= i) {
		toplam = toplam + a;
		a--;
	}

	printf("Toplam = %d", toplam);

	return 0;
}
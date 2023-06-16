//Girilen sayinin tersini yazdir.

#include <stdio.h>

int main() {

	int girilenSayi, ters=0;

	printf("Lutfen bir sayi giriniz: ");
	scanf_s("%d", &girilenSayi);

	while (girilenSayi != 0) {
		ters = ters * 10;
		ters = ters + girilenSayi % 10;
		girilenSayi = girilenSayi / 10;
	}

	printf("Yeni sayi = %d", ters);

	return 0;
}
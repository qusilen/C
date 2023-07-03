/*Kendisi hariç bütün pozitif tamsayý çarpanlarýnýn toplamý kendisine eþit olan sayýlara
mükemmel sayý denir. Örneðin, 28 sayýsýnýn kendisi hariç pozitif çarpanlarý toplamý
1+2+4+7+14 = 28 olduðundan 28 sayýsý mükemmel bir sayýdýr. Buna göre klavyeden girilen
bir sayýnýn mükemmel sayý olup olmadýðýný söylenen C programýný yazýnýz*/

// CTRL+K+D ==> Kodu hizzalar

#include <stdio.h>
#include <conio.h>

int main() {

	int alinanSayi, i;
	int sum = 0;

	printf("Bir sayi giriniz:");
	scanf_s("%d", &alinanSayi);

	for (i = 1; i < alinanSayi; i++) {
		if (alinanSayi % i == 0) {
			sum += i;
		}
	}

	if (alinanSayi == sum) {
		printf("Girdiginiz sayi MUKEMMEL SAYIDIR.");
	}
	else {
		printf("Girdiginiz sayi MUKEMMEL SAYI DEGILDIR.");
	}

	return 0;
}
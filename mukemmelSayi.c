/*Kendisi hari� b�t�n pozitif tamsay� �arpanlar�n�n toplam� kendisine e�it olan say�lara
m�kemmel say� denir. �rne�in, 28 say�s�n�n kendisi hari� pozitif �arpanlar� toplam�
1+2+4+7+14 = 28 oldu�undan 28 say�s� m�kemmel bir say�d�r. Buna g�re klavyeden girilen
bir say�n�n m�kemmel say� olup olmad���n� s�ylenen C program�n� yaz�n�z*/

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
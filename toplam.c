//Yaz�lan say�ya kadar olan b�t�n say�lar� topla.

#include <stdio.h>

int main() {

	int a;
	int i = 1;
	int toplam = 0;
	printf("L�tfen bir sayi giriniz:");
	scanf_s("%d", &a);

	while (a >= i) {
		toplam = toplam + a;
		a--;
	}

	printf("Toplam = %d", toplam);

	return 0;
}
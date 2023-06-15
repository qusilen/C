//Girilen sayilarin basamaklar toplami

#include <stdio.h>

int main() {

	int a, toplam = 0, kalan;

	printf("Lutfen bir sayi giriniz:");
	scanf_s("%d", &a);

	while (a > 0) {
		kalan = a % 10;
		toplam += kalan;
		a = a / 10;
	}

	printf("Girilen sayinin basamaklar toplami = %d", toplam);

	return 0;
}
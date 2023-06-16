#include <stdio.h>

int main() {

	int girilecekSayi, i, j;
	int sayilar[20];

	printf("Kac adet sayi girmek istediginizi yaziniz(Max=20):");
	scanf_s("%d", &girilecekSayi);

	for (i = 0; i < girilecekSayi; i++) {
		printf("\nSayi %d: ", i + 1);
		scanf_s("%d", &sayilar[i]);
	}

	printf("\nGirdiginiz sayilar: \n");

	for (j = 0; j < girilecekSayi; j++) {
	
		printf("Sayi %d: %d\n", j+1, sayilar[j]);
	}
	return 0;
}
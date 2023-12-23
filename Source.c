#include <stdio.h>

int main() {
	int a;
	int sayi1, sayi2;
	int toplama, cikarma, carpma;
	float bolme;
	
	printf(" 1-Toplama \n 2-Cikarma \n 3-Carpma \n 4-Bolme \n Yapilacak islemi seciniz: \n");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		printf("1. sayiyi giriniz:");
		scanf_s("%d", &sayi1);
		printf("2. sayiyi giriniz:");
		scanf_s("%d", &sayi2);
		toplama = sayi1 + sayi2;
		printf("Sonuc = %d", toplama);
		break;

	case 2:
		printf("1. sayiyi giriniz:");
		scanf_s("%d", &sayi1);
		printf("2. sayiyi giriniz:");
		scanf_s("%d", &sayi2);
		cikarma = sayi1 - sayi2;
		printf("Sonuc = %d", cikarma);
		break;

	case 3:
		printf("1. sayiyi giriniz:");
		scanf_s("%d", &sayi1);
		printf("2. sayiyi giriniz:");
		scanf_s("%d", &sayi2);
		carpma = sayi1 * sayi2;
		printf("Sonuc = %d", carpma);
		break;

	case 4:
		printf("1. sayiyi giriniz:");
		scanf_s("%d", &sayi1);
		printf("2. sayiyi giriniz:");
		scanf_s("%d", &sayi2);
		bolme = sayi1 / sayi2;
		printf("Sonuc = %f", bolme);
		break;

	default:
		printf("Lutfen gecerli bir deger giriniz!");
		break;
	}


	return 0;
}
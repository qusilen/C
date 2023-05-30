#include <stdio.h>

int main() {

	int a;
	int b;

	int carp;
	float bol;
	int topla;
	int cikar;
	float mod;

	printf("Bir sayi giriniz:\n");
	scanf_s("%d", &a); //scanf, secure hatasý verdiði için scanf_s kullandým.
	printf("Diger sayiyi giriniz:\n");
	scanf_s("%d", &b);

	carp = a * b;
	bol = a / b;
	topla = a + b;
	cikar = a - b;
	mod = a % b;

	printf("Carpma sonucu:%d\n", carp);
	printf("Bolme sonucu:%f\n", bol);
	printf("Toplama sonucu:%d\n", topla);
	printf("Cikarma sonucu:%d\n", cikar);
	printf("Mod sonucu:%f\n", mod);

	return 0;
}
#include <stdio.h>

int main() {

	//yorum satırı

	/*
	yorum
	alanı
	*/

	/*
	\n => bir satır aşağı kaydırır.
	\t => bir tab boşluk bırakır.
	*/

	//DEĞİŞKENLER

	/*
	int - tam sayı - %d - 4 byte
	float - kesirli sayı %f - 4 byte
	double - büyük kesirli sayı %lf - 8 byte 
	char - karakter %c - 1 byte
	*/

	int sayi1 = 4;
	float sayi2 = 2.4;
	double sayi3 = 24.2002;
	char harf1 = 'E';

	printf(" int degeri: %d \n float degeri: %f \n double degeri: %lf \n char degeri: %c",sayi1,sayi2,sayi3,harf1);

	return 0;
}
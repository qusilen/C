#include <stdio.h>

int main() {

	//yorum sat�r�

	/*
	yorum
	alan�
	*/

	/*
	\n => bir sat�r a�a�� kayd�r�r.
	\t => bir tab bo�luk b�rak�r.
	*/

	//DE���KENLER

	/*
	int - tam say� - %d - 4 byte
	float - kesirli say� %f - 4 byte
	double - b�y�k kesirli say� %lf - 8 byte 
	char - karakter %c - 1 byte
	*/

	int sayi1 = 4;
	float sayi2 = 2.4;
	double sayi3 = 24.2002;
	char harf1 = 'E';

	printf(" int degeri: %d \n float degeri: %f \n double degeri: %lf \n char degeri: %c",sayi1,sayi2,sayi3,harf1);

	return 0;
}
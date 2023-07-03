/*�� basamakl� rakamlar� birbirinden farkl� t�m say�lar� ekranda g�steren ve bu kurala
uygun ka� tane say� oldu�unu s�yleyen C program�n� yaz�n�z.
�rnek ��kt� : 102 103 104 105 106 107 108 109 120 123 . . . . . 980 981 982 983 984 985 986 987
Bu kurala uygun 648 say� vard�r.*/

#include <stdio.h>

int main() {

	int sayi, a, b, c, sayac = 0;

	for (sayi = 100; sayi <= 999; sayi++) {

		a = sayi / 100; //y�zler basama��
		b = (sayi % 100) / 10; //onlar basama��
		c = (sayi % 10); //onlar basama��

		if (a != b && a != c && b != c) {
			sayac += 1;
			printf("%d\t", sayi);
		}
	}

	printf("\nToplam %d adet rakamlari farkli 3 basamakli sayi vardir.", sayac);

	return 0;
}
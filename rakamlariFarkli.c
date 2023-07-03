/*Üç basamaklı rakamları birbirinden farklı tüm sayıları ekranda gösteren ve bu kurala
uygun kaç tane sayı olduğunu söyleyen C programını yazınız.
Örnek çıktı : 102 103 104 105 106 107 108 109 120 123 . . . . . 980 981 982 983 984 985 986 987
Bu kurala uygun 648 sayı vardır.*/

#include <stdio.h>

int main() {

	int sayi, a, b, c, sayac = 0;

	for (sayi = 100; sayi <= 999; sayi++) {

		a = sayi / 100; //yüzler basamağı
		b = (sayi % 100) / 10; //onlar basamağı
		c = (sayi % 10); //onlar basamağı

		if (a != b && a != c && b != c) {
			sayac += 1;
			printf("%d\t", sayi);
		}
	}

	printf("\nToplam %d adet rakamlari farkli 3 basamakli sayi vardir.", sayac);

	return 0;
}
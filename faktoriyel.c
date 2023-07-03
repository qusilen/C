/*Klavyeden girilecek bir tamsayýnýn faktöryelini hesaplayan C programýný while döngüsünü
kullanarak yapýnýz.*/

#include <stdio.h>

int main() {

	int a, fact = 1;

	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz:");
	scanf_s("%d", &a);

	while (a > 0) {
		fact = fact * a;
		a--;
	}

	printf("\nGirdiginiz sayinin faktoriyeli %d 'dir.", fact);

	return 0;
}
/*Klavyeden girilecek bir tamsayının faktöryelini hesaplayan C programını while döngüsünü
kullanarak yapınız.*/

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
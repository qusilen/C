/*Klavyeden girilecek bir tamsay�n�n fakt�ryelini hesaplayan C program�n� while d�ng�s�n�
kullanarak yap�n�z.*/

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
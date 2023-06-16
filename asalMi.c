//Girilen sayi asal mi diye kontrol eder.

#include <stdio.h>

int main() {

	int a, sayac=0,i;

	printf("Lutfen bir sayi giriniz: ");
	scanf_s("%d", &a);

	for (i = 2; i < a; i++) {
		if (a % i == 0) {
			sayac++;
		}
	}
	if (sayac == 0) {
		printf("Girdiginiz sayi asaldir.");
	}
	else {
		printf("Girdiginiz sayi asal degildir.");
	}
	return 0;
}
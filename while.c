// While ile faktöriyel hesaplama

#include <stdio.h>

int main() {

	int a;
	int i = 1;
	int fact = 1;

	printf("Faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz:\n");
	scanf_s("%d", &a);

	while (a >= i) {
		fact = fact * i;
		i++;
	}

	printf("Sonuc:%d\n", fact);

	return 0;
}
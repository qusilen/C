//Kullanýcýdan alýnan 3 adet sayýnýn aritmetik ortalamasýný ekrana yazdýrýn.

#include <stdio.h>

int main() {

	float a, b, c;
	float ort;

	printf("Lutfen uc sayi giriniz:\n");
	scanf_s("%f %f %f", &a, &b, &c);
	
	ort = (a + b + c) / 3;

	printf("Girdiginiz sayilarin aritmetik ortalamasi=%f", ort);

	return 0;
}
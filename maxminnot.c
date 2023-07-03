/*20 kiþilik bir sýnýfta öðrencilerin bir dersten aldýðý notlar klavyeden girilecektir. Notlar
girildikten sonra, sýnýfýn ortalamasýný, sýnýftaki en yüksek ve en düþük notu bulan ve ekranda
gösteren programýn kodunu C diliyle yazýnýz.*/

#include <stdio.h>

int main() {

	int sinif[20];
	int ort, max, min, i, sum = 0;

	for (i = 0; i < 20; i++) {
		printf("Lutfen %d. ogrencinin notunu giriniz:", i + 1);
		scanf_s("%d", &sinif[i]);
		sum += sinif[i];
	}

	ort = sum / 20;
	printf("Sinif ortalamasi: %d'dir.\n", ort);

	max = sinif[0];
	min = sinif[0];

	for (i = 0; i < 20; i++) {
		if (sinif[i] > max) {
			max = sinif[i];
		}
		if (sinif[i] < min) {
			min = sinif[i];
		}
	}

	printf("En dusuk not: %d \nEn yuksek not: %d", min, max);

	return 0;
}
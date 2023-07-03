/*20 ki�ilik bir s�n�fta ��rencilerin bir dersten ald��� notlar klavyeden girilecektir. Notlar
girildikten sonra, s�n�f�n ortalamas�n�, s�n�ftaki en y�ksek ve en d���k notu bulan ve ekranda
g�steren program�n kodunu C diliyle yaz�n�z.*/

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
//kullan�c�dan 2 say� al. bu say�larla topla-��kar-�arp-b�l komutlar�ndan birini se�tirip sonucu ekrana yazd�r.
#include <stdio.h>

int main() {
	int a, b;
	int islem;
	printf("2 adet sayi giriniz:\n");
	scanf_s("%d %d", &a, &b);
	printf("Yapilacak islemi seciniz:\n 1-Topla\n 2-Cikar\n 3-Carp\n 4-Bol\n");
	scanf_s("%d", &islem);

	switch (islem)
	{
	case 1:
		printf("Toplam= %d",a+b);
		break;
	case 2:
		printf("Fark= %d", a - b);
		break;
	case 3:
		printf("Carpim= %d ", a * b);
		break;
	case 4:
		if (b != 0) {
			printf("Bolum= %f", a / b);
		}
		else {
			printf("Bolme islemi tanimsiz.");
		}
		break;
	default:
		printf("Lutfen gecerli bir deger giriniz.");
		break;
	}


	return 0;
}
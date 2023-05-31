#include <stdio.h>

int main() {

	char isim[10];
	printf("Isminizi giriniz:");
	if (scanf_s("%9s", isim, sizeof(isim)) != 1) {
		printf("Gecersiz giris.\n");
		return 1;
	}
	printf("Isminiz: %s\n", isim);

	/*
	scanf_s fonksiyonunu kullan�rken, %s belirteciyle karakter
	dizisi al�rken ek olarak boyut bilgisini belirtmeniz gerekmektedir.

	Bu, potansiyel bir ta�ma hatas�n� �nlemek i�in kullan�l�r.
	%9s ifadesi, isim dizisinin maksimum 9 karakterlik giri� alabilece�ini
	belirtir. sizeof(isim) ifadesi ise isim dizisinin bellekte kaplad��� toplam boyutu verir.

	Ayr�ca, scanf_s fonksiyonunun geri d�n�� de�erini kontrol etmek de iyi bir uygulama y�ntemidir.
	Ba�ar�l� bir giri� al�nd���nda scanf_s, 0'dan farkl� bir de�er d�nd�r�r.
	Bu nedenle, scanf_s fonksiyonunu �a��rd�ktan sonra d�n�� de�erini kontrol
	edebilir ve hata durumlar�n� ele alabilirsiniz.
	*/

	return 0;
}
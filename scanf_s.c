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
	scanf_s fonksiyonunu kullanýrken, %s belirteciyle karakter
	dizisi alýrken ek olarak boyut bilgisini belirtmeniz gerekmektedir.

	Bu, potansiyel bir taþma hatasýný önlemek için kullanýlýr.
	%9s ifadesi, isim dizisinin maksimum 9 karakterlik giriþ alabileceðini
	belirtir. sizeof(isim) ifadesi ise isim dizisinin bellekte kapladýðý toplam boyutu verir.

	Ayrýca, scanf_s fonksiyonunun geri dönüþ deðerini kontrol etmek de iyi bir uygulama yöntemidir.
	Baþarýlý bir giriþ alýndýðýnda scanf_s, 0'dan farklý bir deðer döndürür.
	Bu nedenle, scanf_s fonksiyonunu çaðýrdýktan sonra dönüþ deðerini kontrol
	edebilir ve hata durumlarýný ele alabilirsiniz.
	*/

	return 0;
}
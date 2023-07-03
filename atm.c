/* Bir memur, ATM makinasýndan para çekmek istemektedir. Makinede sadece 10, 20, 50 ve
100 TL' lik banknotlar kalmýþtýr. Büyük deðerli banknotlarýn sayýsý maksimum olacak þekilde,
çekilecek paranýn kaç tane 100, 50, 20 ve 10 liralýk banknottan oluþacaðýný ekranda yazan C
programýný yazýnýz.
Örnek çýktýlar : Lütfen para miktarýný giriniz : 2435
En küçük 10 TL’ lik banknot mevcut..!
Lütfen para miktarýný giriniz : 2430
24 adet 100 TL
1 adet 20 TL
1 adet 10 TL*/

#include <stdio.h>

int main() {

	int alinacak, yuzluk, ellilik, yirmilik, onluk;


	printf("Lutfen para miktari giriniz:");
	scanf_s("%d", &alinacak);

	if (alinacak % 10 != 0) {
		printf("En kucuk 10 TL'lik banknot bulunmaktadir!");
	}
	else {
		yuzluk = alinacak / 100;
		alinacak -= yuzluk * 100;
		ellilik = alinacak / 50;
		alinacak -= ellilik * 50;
		yirmilik = alinacak / 20;
		alinacak -= yirmilik * 20;
		onluk = alinacak / 10;
		printf("%d adet 100 TL \n %d adet 50 TL \n %d adet 20 TL \n %d adet 10 TL", yuzluk, ellilik, yirmilik, onluk);
	}

	return 0;
}
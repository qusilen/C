/* Bir memur, ATM makinas�ndan para �ekmek istemektedir. Makinede sadece 10, 20, 50 ve
100 TL' lik banknotlar kalm��t�r. B�y�k de�erli banknotlar�n say�s� maksimum olacak �ekilde,
�ekilecek paran�n ka� tane 100, 50, 20 ve 10 liral�k banknottan olu�aca��n� ekranda yazan C
program�n� yaz�n�z.
�rnek ��kt�lar : L�tfen para miktar�n� giriniz : 2435
En k���k 10 TL� lik banknot mevcut..!
L�tfen para miktar�n� giriniz : 2430
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
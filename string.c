#include <stdio.h>

//a�a��da anlat�lan fonksiyonlar� kullanabilmek i�in bu k�t�phaneyi eklememiz gerekiyor.
#include <string.h>

int main() {

	int i;
	char isim[] = "Burak";
	char soyisim[] = "YILMAZ";

	//char dizisini %s ile yazd�rabiliriz.
	printf("%s\n", isim);

	//d�ng� ile de diziyi �ekebiliriz.
	for (i = 0; i < strlen(isim); i++) {
		printf("%c", isim[i]);
	}

	//tek bir harfi �ekmek istiyorsak:
	printf("\n%c", isim[0]);

	/*
	strcat => bir stringi di�er stringin sonuna ekler.
	strlen => stringin karakter say�s�n� belirler.
	strcmp => 2 string ayn� m� diye kontrol eder.
	strlwr => dizeyi k���k harfe �evirir.
	strupr => dizeyi b�y�k harfe �evirir.
	strrev => dizeyi ters �evirir.
	*/

	

	int uzunluk = strlen(isim);
	printf("\n%d",uzunluk);



	if (strcmp(isim, soyisim) == 0) {
		printf("\nBilgiler eslesti.\n");
	}
	else {
		printf("\nBilgiler eslesmedi.\n");
	}

	

	printf(_strrev(isim));

		
	
	return 0;
}
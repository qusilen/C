#include <stdio.h>

//aþaðýda anlatýlan fonksiyonlarý kullanabilmek için bu kütüphaneyi eklememiz gerekiyor.
#include <string.h>

int main() {

	int i;
	char isim[] = "Burak";
	char soyisim[] = "YILMAZ";

	//char dizisini %s ile yazdýrabiliriz.
	printf("%s\n", isim);

	//döngü ile de diziyi çekebiliriz.
	for (i = 0; i < strlen(isim); i++) {
		printf("%c", isim[i]);
	}

	//tek bir harfi çekmek istiyorsak:
	printf("\n%c", isim[0]);

	/*
	strcat => bir stringi diðer stringin sonuna ekler.
	strlen => stringin karakter sayýsýný belirler.
	strcmp => 2 string ayný mý diye kontrol eder.
	strlwr => dizeyi küçük harfe çevirir.
	strupr => dizeyi büyük harfe çevirir.
	strrev => dizeyi ters çevirir.
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
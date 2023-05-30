// 2x^2+2y+3

#include <stdio.h>

int main() {

	int x, y;
	float sonuc;

	printf("Denklemin once x'ini sonra y'sini giriniz:\n");
	scanf_s("%d %d", &x, &y);
	sonuc = 2*(x*x) + 2 * y + 3;
	printf("Denklemin sonucu=%f", sonuc);

	return 0;
}
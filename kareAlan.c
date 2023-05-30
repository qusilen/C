// Çevresi bilinen bir karenin alanýný buldurma.

#include <stdio.h>
#define cevre 20 // cevre'ye 20 deðerini atadýk.

int main() {

	int kenar;
	int alan;

	kenar = cevre / 4;
	alan = kenar * kenar;

	printf("Karenin alani:%d", alan);


	return 0;
}
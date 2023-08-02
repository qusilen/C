#include <stdio.h>

int main() {

	int a,b;
	int bakiye = 1000;
	int cek, yat;
	printf("Girmek istediginiz modulu seciniz: \n1: Para cek. \n2: Para yatir. \n3: Bakiye goruntule. \n");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1: 
		printf("Kac TL cekmek istiyorsun?\n");
		scanf_s("%d", &cek);
		if (bakiye >= cek) {
			bakiye -= cek;
			printf("Paraniz verilmistir. \nYeni Bakiye: %d \nKartinizi alabilirsiniz. \nCikis yapildi.", bakiye);
		}
		else {
			printf("Cekmek istediginiz tutar hesabinizda bulunmamaktadir. \nEger - limite dusmek isterseniz 1'e, istemezseniz 2'ye basiniz.\n");
			scanf_s("%d", &b);
			switch (b)
			{
			case 1:
				bakiye -= cek;
				printf("Paraniz verilmistir. \nYeni Bakiye= %d \nKartinizi alabilirsiniz. \nCikis yapildi.", bakiye);
				break;
			case 2:
				printf("Cikis yapildi.");
				break;
			default:
				break;
			}
		}
		break;
	case 2:
		printf("Kac TL yatirmak istiyorsunuz? \n");
		scanf_s("%d",&yat);
		bakiye += yat;
		printf("Yeni Bakiye: %d \nKartinizi alabilirsiniz. \nCikis yapildi.", bakiye);
		break;
	case 3:
		printf("%d", bakiye);
		break;
	default:
		break;
	}
	return 0;
}
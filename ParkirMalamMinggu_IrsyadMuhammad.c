/*
Program			: ParkirMalamMinggu_Irsyad Muhammad.c
Deskripsi		: Menghitung total biaya parkir atau status disegel motor atau mobil.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/20 Oktober 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>
int main() {
	
	/*deklarasi*/
	int jeniskendaraan;
	int waktu;
	int totalbiaya;
	
	/*algoritma*/
	scanf("%d",&jeniskendaraan);
	scanf("%d",&waktu);
	switch (jeniskendaraan) {
		case 1:
			if (waktu>= 0&&waktu<=5) {
			totalbiaya=1500*waktu;
			printf("%d", totalbiaya);
			}
				if (waktu>5 && waktu <=8) {
				totalbiaya=7500+500*(waktu-5);
				printf("%d", totalbiaya);
				}
					if (waktu>8) {
						printf("disegel");
					}
		break;
		case 2:
			if(waktu>= 0&&waktu<=5){
			totalbiaya=1000*waktu;
			printf("%d", totalbiaya);
			}
				if(waktu>5 && waktu <=8){
				totalbiaya=5000+500*(waktu-5);
				printf("%d", totalbiaya);
				}
					if(waktu>8){
					printf("disegel");
					}
		break;
}
return 0;
}

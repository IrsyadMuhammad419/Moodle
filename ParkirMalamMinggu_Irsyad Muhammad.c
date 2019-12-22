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
	if(jeniskendaraan==1 && waktu<=5){
		totalbiaya=1500*waktu;
	}
	else{
		totalbiaya=1000*waktu;
	}
	if(jeniskendaraan==1 && waktu>5){
		totalbiaya=1500*waktu+500*(waktu-5);
	}
	else{
		totalbiaya=1500*waktu+500*(waktu-5);
	}

	/*depend on*/
	switch(jeniskendaraan){
		case 1:printf("");break;
		case 2:printf("");break;
	}
	switch(waktu){
		case 0:printf("%d",totalbiaya);break;
		case 1:printf("%d",totalbiaya);break;
		case 2:printf("%d",totalbiaya);break;
		case 3:printf("%d",totalbiaya);break;
		case 4:printf("%d",totalbiaya);break;
		case 5:printf("%d",totalbiaya);break;
		case 6:printf("%d",totalbiaya);break;
		case 7:printf("%d",totalbiaya);break;
		case 8:printf("%d",totalbiaya);break;
	default:printf("disegel");
	}
	printf("%d",totalbiaya);
	return 0;
}

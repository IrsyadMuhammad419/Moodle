/*
Program			: Parkir_Irsyad Muhammad.c
Deskripsi		: Menghitung total biaya parkir motor atau mobil dengan beberapa ketentuan
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
	if(jeniskendaraan==1){
		totalbiaya=2000+(waktu-1)*1000;
	}
	else{
		totalbiaya=1000+(waktu-1)*500;
	}
		
	/*depend on*/
	switch(jeniskendaraan){
		case 1:printf("");break;
		case 2:printf("");break;
	}
	printf("%d",totalbiaya);
	return 0;
}

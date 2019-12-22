/*
Program			: BiayaSetelahBunga_IrsyadMuhammad.C
Deskripsi		: Menghitung biaya yang harus dibayar
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/18 Oktober 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	//deklarasi
	float BiayaAwal,Bunga,BiayaAkhir;
	
	//algoritma
	scanf("%f",&BiayaAwal);
	if(BiayaAwal >0 && BiayaAwal <150000){
		scanf("%f",&Bunga);
		BiayaAkhir=BiayaAwal+(Bunga/100*BiayaAwal);
	}
	else{
		printf("Nilai BiayaAwal yang diinput diluar range 0 sampai 150000");
	}
	printf("%.2f\n",BiayaAkhir);
return 0;
}

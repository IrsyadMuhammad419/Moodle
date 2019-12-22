/*
Program			: Luaslingkaran_IrsyadMuhammad.C
Deskripsi		: Menghitung luas lingkaran dari jari-jarinya
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/18 Oktober 2019
Compiler		: Dev c++ 5.1.1
*/
#include<stdio.h>
#include<math.h>

int main(){
	//deklarasi
	float luas;
	float r;
	
	//algoritma
	scanf("%f",&r);
	if (r >0 && r <=100){
		luas=r*r*3.14;	
		printf("%.2f\n",luas);
	}
	else{
		printf("Nilai r yang dimasukkan melebihi range dari 0 sampai sama dengan 100");
	}	
	return 0;
}

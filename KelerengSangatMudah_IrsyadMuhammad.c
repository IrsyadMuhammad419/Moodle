/*
Program			: KelerengSangatMudah_IrsyadMuhammad.c
Deskripsi		: Mengecek warna kelereng yang terdapat dalam wadah
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/24Oktober 2019
Compiler		: Dev c++ 5.1.1
*/
#include<stdio.h>
int main(){
	/*deklarasi*/
	char M,B,K;
	char var;
	
	/*algoritma*/
	scanf("%c", &var);
	if (var=='M'){
		printf("Kelereng Merah");
	}
	if(var=='B'){
		printf("Kelereng Biru");
	}
	if(var=='K'){
		printf("Kelereng Kuning");
	}
	
	return 0;
}


/*
Program			: Kelipatan34_IrsyadMuhammad.c
Deskripsi		: Menentukan suatu bilangan termasuk kelipatan 3 dan 4 atau tidak
Nama			: Irsyad Muhammad
Tanggal/Versi	: 27 Oktober 2019/ 01
Compiler		: Dev c++ 5.11
*/

#include<stdio.h>

int main(){
	/*deklarasi*/
	int angka,cek;
	
	/*algoritma*/
	cek=0;
	scanf("%d", &angka);
	if (angka % 12==0){
		cek=1;
	}
	printf("%d",cek);
	return 0;
}

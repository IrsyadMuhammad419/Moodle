/*
Program			: GanjilGenap_IrsyadMuhammad.c
Deskripsi		: Menentukan suatu bilangan termasuk bilangan ganjil atau genap
Nama			: Irsyad Muhammad
Tanggal/Versi	: 27 Oktober 2019/ 01
Compiler		: Dev c++ 5.11
*/

#include<stdio.h>

int main(){
	/*deklarasi*/
	int angka;
	
	/*algoritma*/
	scanf("%d", &angka);
	if (angka%2 == 1){
		printf("ganjil\n");
	}
	else{
		if(angka==0){
		printf("nol\n");
		}
		else{
		printf("genap\n");
		}	
	}
	return 0;
}

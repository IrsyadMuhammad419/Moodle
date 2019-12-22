/*
Program			: GanjilGenap_Irsyad Muhammad.c
Deskripsi		: Menentukan apakah suatu bilangan termasuk bilangan ganjil atau genap
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/20 Oktober 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	int angka;
	
	/*algoritma*/
	scanf("%d",&angka);
	if (angka%2 == 1){ //operasi angka % 2 merupakan operasi Modulus yang digunakan untuk mencari nilai sisa
		printf("ganjil\n");
	}
	else{
		printf("genap\n");
	}
	return 0;
}

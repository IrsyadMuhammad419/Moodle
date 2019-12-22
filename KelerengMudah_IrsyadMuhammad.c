/*
Program			: KelerengMudah_IrsyadMuhammad.c
Deskripsi		: Menentukan warna dari setiap kelereng yang terdapat di dalam wadah tersebut.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/24Oktober 2019
Compiler		: Dev c++ 5.1.1
*/

#include <stdio.h>

int main () {
	/*Deklarasi*/
	char kelereng[5];
	int i;
	/*Algoritma*/
	for (i=0;i<5;i++){
		scanf("%c",&kelereng[i]);
		switch(kelereng[i]) {
			case 'B': printf("Biru");break;
			case 'M': printf("Merah");break;
			case 'K': printf("Kuning");break;
		}
			if (i!=4)
			printf("");
	}
	return 0;
}

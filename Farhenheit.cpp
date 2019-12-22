/*
Program			: Konversi Celcius ke Farhenheit
Deskripsi		: Mengonversi suhu dalam satuan Celcius menjadi suhu dalam satuan Fahrenheit.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/18 Oktober 2019
Compiler		: Dev c++ 5.1.1
Catatan			: F = C x 1.8 + 32
*/

#include <stdio.h>
#include <math.h>

int main() {
	//deklarasi
	float F,C;
	
	//algoritma
	scanf("%f",&C );{
	F=(C*1.8)+32;
	printf("%2.f\n",F);
	}
	return 0;	
}

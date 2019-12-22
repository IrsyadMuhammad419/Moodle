/*
Program			: Limas_Irsyad Muhammad.c
Deskripsi		: Menghitung Volume Limas
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/20 Oktober 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	float volume;
	float P,L,T;
	
	/*algoritma*/
	scanf("%f %f %f",&P,&L,&T);
	volume=P*L*T/3;
	printf("%f\n",volume);
	
	return 0;
}

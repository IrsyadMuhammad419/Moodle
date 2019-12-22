/*
Program			: SelisihMinMax_IrsyadMuhammad.c
Deskripsi		: Program untuk menghitung selisih bilangan terbesar dan bilangan terkecil dari suatu array
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/13 Desember 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	int bil[10], i, hasil, maks, min;
	
	/*algoritma*/
	for(i=0;i<10;i++){ //memasukkan bilangan ke dalam array
		scanf("%d", &bil[i]);
	}
	
	/*menentukan nilai maks dari array*/
	maks=bil[0];
	
	for(i=1;i<10;i++){
		if(maks<bil[i]){
			maks=bil[i];
		}
	}
	
	/*menentukan nilai minimal dari arry*/
	min=bil[0];
	
	for(i=1;i<10;i++){
		if(min>bil[i]){
			min=bil[i];
		}
	}
	
	hasil=maks-min;
	
	printf("%d",hasil);
	
	return 0;
}

/*
Program			: SelisihPrima_IrsyadMuhammad.c
Deskripsi		: 
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/22 November 2019
Compiler		: Dev c++ 5.1.1
*/

#include <stdio.h>

int main(){

	/*Kamus Data*/
	int bil, awal, akhir, prima=0, PrimaMax=0, PrimaMin=0, faktor, pembagi, selisih;
	
	/*Algoritma*/
	scanf("%d %d", &awal, &akhir);
	
	/*Mencari bilangan prima terkecil*/
	for(bil=awal; bil<=akhir; bil++){
		faktor=0;
		prima=0;
		if(bil<=0){
			prima=0;
		}else for(pembagi=1;pembagi<bil;pembagi++){
			if(bil%pembagi==0){
				faktor++;
			}
		}
		if(faktor==1){
			prima = 1;
			break;
		}
	}
	PrimaMin = bil;
	/*Mencari bilangan prima terbesar*/
	for(bil=akhir; bil>=awal; bil--){
		faktor=0;
		prima=0;
		if(bil<=0){
			prima=0;
		}else for(pembagi=1; pembagi<bil; pembagi++){
			if(bil%pembagi==0){
				faktor++;
			}
		}
		if(faktor==1){
			prima=1;
			break;
		}
	}
	PrimaMax = bil;
	selisih = PrimaMax-PrimaMin;
	printf("%d", selisih);
	return 0;
}


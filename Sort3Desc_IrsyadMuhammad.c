/*
Program			: Sort3Desc_IrsyadMuhammad.c
Deskripsi		: Program untuk mengurutkan tiga data integer yang dimasukkan secara descending 
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/13 Desember 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	int des[3], i, j, temp;
	
	/*algoritma*/
	
	for(i=0; i<3;i++){ //menginput 3 angka desimal yang akan diurutkan
		scanf("%d",&des[i]);
	}
	
	for(i=1; i<3; i++){
		
		if(des[i-1]<des[i]){
		
			temp=des[i];
			des[i]=des[i-1];
			des[i-1]=temp;	
		}
	}
	
	if(des[0]<des[1]){
		temp=des[1];
		des[1]=des[0];
		des[0]=temp;
	}
	
	printf("%d %d %d", des[0], des[1], des[2]);
	
	return 0;
}

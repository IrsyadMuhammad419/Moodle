/*
Program			: Couple_IrsyadMuhammad.c
Deskripsi		: Mencari huruf berpasangan
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/19 Desember 2019
Compiler		: TDM-GCC 4.9.2 64
*/

#include<stdio.h>

int main(){
//deklarasi

	char X[10]="JTKPolban", cek1, cek2;
	int i, ada=0;
	
//algoritma
	scanf("%c %c", &cek1, &cek2);
	
	for(i=0; i<9;i++){
		
		if(tolower(cek2) == tolower(X[i]) && tolower(cek1) == tolower(X[i+1])){
			printf("ada\n");
			ada=1;
			break;
		}
	}
	
	if(ada==0){
		printf("tidak ada\n");
	}
	return 0;	
}

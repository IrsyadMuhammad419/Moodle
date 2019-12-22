/*
Program			: Maks10_IrsyadMuhammad.c
Deskripsi		: Program untuk menentukan bilangan terbesar dari bilangan yang ada di array
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/13 Desember 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	int bil[10], i, j, temp;
	
	/*algoritma*/
	for(i=0;i<10;i++){ //memasukkan bilangan ke dalam array
		scanf("%d", &bil[i]);
	}
	
	temp=bil[0];
	
	for(i=1;i<10;i++){
		if(temp<bil[i]){
			temp=bil[i];
		}
	}
	
	printf("%d",temp);
	
	return 0;
}

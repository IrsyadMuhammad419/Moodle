/* 	
Program			: Prima_IrsyadMuhammad.c
Deskripsi		: Menentuka suatu bilangan apakah prima atau tidak 
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 07 November 2019
Compiler		: Dev C++ 5.1.1
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
	/*Deklarasi*/
	int bil, i = 2; 
	bool y = true; 
	
	/*Algoritma*/
	scanf("%d", &bil);
	if (bil >= 2) { 
		if (bil == 2 || bil == 3) { //jika prims 2 & 3, prims = bilangan prima
			printf("prima");
		} else {
			while(i<bil && y) { //jika i kurang dari prims & prima = true
				if(bil%i == 0) {
					y = false;
				}
				i++;
			}
			if(y){
				printf("prima");
			} 
			else {
				printf("bukan prima");
			}
		}
	} else {
		printf("bukan prima");
	}
	return 0;
}

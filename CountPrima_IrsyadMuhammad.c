/* 	
Program			: CountPrima_IrsyadMuhammad.c
Deskripsi		: Menentukan jumlah bilangan prima dalam sebuah array
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 15 November 2019
Compiler		: Dev C++ 5.1.1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	/*Deklarasi*/
	int bil[11];
	int count, i=2, j; 
	bool y = true; 
	
	/*Algoritma*/
	scanf("%d %d %d %d %d %d %d %d %d %d",&bil[0],&bil[1],&bil[2],&bil[3],&bil[4],&bil[5],&bil[6],&bil[7],&bil[8],&bil[9]);
	for(j=0;j<10;j++){
		i=2;
		y=true;
		if (bil[j] >= 2) { 
			if (bil[j] == 2 || bil[j] == 3) {
				count=count+1;
			} else {
				while(i<bil[j] && y) {
					if(bil[j]%i == 0) {
						y = false;
					}
					i++;
				}
				if(y){
					count=count+1;
				} 
			}
		}
	}
	printf("%d",count);
	return 0;
}

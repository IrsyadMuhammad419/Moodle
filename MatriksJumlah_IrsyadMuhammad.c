/*Program		: MatriksJumlah.c
Deskripsi		: menghitung hasil penjumlahan matriks A dan matriks B, dengan A dan B berordo 3 × 3.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	int A[4][4], B[4][4];
	int i, j;
	
	//row
	for(i=0; i<3; i++){
		//collumn
		for(j=0; j<3; j++){
			scanf("%d", &A[i][j]);
		}	
	}
	
	//row
	for(i=0; i<3; i++){
		//collumn
		for(j=0; j<3; j++){
			scanf("%d", &B[i][j]);
		}	
	}
	
	//row
	for(i=0; i<3; i++){
		//collumn
		for(j=0; j<3; j++){
			if(j == 2)
				printf("%d", ((A[i][j])+(B[i][j])));
			else
				printf("%d ", ((A[i][j])+(B[i][j])));
		}
		printf("\n");
	}
	
	return 0;
}

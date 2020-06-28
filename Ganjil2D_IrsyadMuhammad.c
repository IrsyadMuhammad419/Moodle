/*Program		: Ganjil2D.c
Deskripsi		: menghitung banyaknya kemunculan bilangan ganjil pada array X, di mana X adalah array 2 dimensi berordo 4 × 4.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	int X[5][5];
	int i, j, odd=0;
	
	//row
	for(i=0; i<4; i++){
		//collumn
		for(j=0; j<4; j++){
			scanf("%d", &X[i][j]);
			if(X[i][j] % 2 != 0)
				odd += 1;
		}
		
	}
	printf("%d",odd);
	
	return 0;
}

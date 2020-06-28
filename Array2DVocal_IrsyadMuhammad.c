/*Program		: Array2DVocal.c
Deskripsi		: menampilkan posisi kemunculan huruf vokal yang ada di sebuah array 2 dimensi berordo 3 × 3
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(){
	
	//declare
	char A[4][4], vocal[6]="aiueo";
	int i, j, k;
	bool myChar = false;
	
	//row
	for(i=0; i<3; i++){
		//collumn
		for(j=0; j<3; j++){
			scanf(" %c",&A[i][j]);
		}	
	}
		
	//row
	for(i=0; i<3; i++){
		//collumn
		for(j=0; j<3; j++){
			//vocal
			for(k=0; k<6; k++){
				if(tolower(A[i][j]) == vocal[k] ){
					printf("%c: (%d,%d)\n",A[i][j],i+1,j+1);
					myChar = true;
				}
			}
		}	
	}
	
	if(myChar == false)
		printf("tidak ada huruf vokal\n");
	return 0;
}
	

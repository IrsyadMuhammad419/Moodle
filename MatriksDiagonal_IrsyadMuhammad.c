/*Program		: Matriks Diagonal.c
Deskripsi		: memeriksa apakah sebuah matriks M merupakan matriks diagonal atau bukan, di mana M adalah sebuah matriks dengan ordo 3 × 3
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
	
	int m[4][4], i, j;
	bool diag = true;
	
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&m[i][j]);
			if( i == j && m[i][j] == 0 ){			
				diag = false;
			}
			else if(i != j && m[i][j] != 0){
				diag = false;
			}
		}
	}
	
	if(diag == true)
		printf("matriks diagonal\n");
	else
		printf("bukan matriks diagonal\n");
		
	return 0;
}

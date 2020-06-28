/*Program		: MatriksSimetris.c
Deskripsi		: memeriksa apakah sebuah matriks M merupakan matriks simetris, di mana M adalah sebuah matriks dengan ordo 3 × 3
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/25 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
	//declare
	int m[4][4];
	int i, j;
	bool transpose = true;
	
	//assignment matrix
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &m[i][j]);				
		}
	}
	
	//check A = A transpose 
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			//check diagonal matrix
			if(i == j && m[0][0] != m[2][2]){
				transpose = false;	
			}
			//m[i][j] must be same as m[j][i]
			else if(i!=j && m[i][j] != m[j][i]){
				transpose = false;
			}
		}
	}
	
	if(transpose == true){
		printf("matriks simetris");
	}
	else{
		printf("bukan matriks simetris");
	}
	return 0;
}

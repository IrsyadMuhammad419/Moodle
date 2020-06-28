/*Program		: CheckSudoku.c
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
	bool unique = true;

	//assignment matrix
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		
		if(m[0][i] == m[1][i] || m[0][i] == m[2][i] || m[2][i] == m[1][i]){
			unique = false;
			break;
		}
		else if(m[i][0] == m[i][1] || m[i][0] == m[i][2] || m[i][1] == m[i][2]){
			unique = false;
			break;			
		}
	}
	
	if(unique == true)
		printf("valid");
	else
		printf("tidak valid");
		
	return 0;
}

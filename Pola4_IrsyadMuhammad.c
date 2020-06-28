/*Program		: Pola3.c
Deskripsi		: membuat pola seperti pada contoh input dan contoh output.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	
	int i, j, N, O, X[11][11];
	
	//assign
	scanf("%d %d",&N, &O );

	for(i = 0; i < N; i++){
		for(j = 0; j < O; j++){

			if(j == O - 1){
				if(j % 2 == 0){
					
					X[i][j] = (i + 1) + N * j;
					printf("%d", X[i][j] );
				}
				else{
					X[i][j] =  N + (N * j) - i;
					printf("%d", X[i][j]);
				}
			}
			else{
				if(j % 2 == 0){
					
					X[i][j] = (i + 1) + N * j;
					printf("%d ", X[i][j] );
				}
				else{
					X[i][j] =  N + (N * j) - i;
					printf("%d ", X[i][j]);
				}
			}

		}
		
		if(i != N - 1){
			printf("\n");
		}
	}
	
	return 0;
}

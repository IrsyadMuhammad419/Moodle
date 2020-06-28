/*Program		: Pola3.c
Deskripsi		: membuat pola seperti pada contoh input dan contoh output.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	
	int i, j, N, X = 1;
	
	//assign
	scanf("%d",&N);
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			
			if(j == N-1){
				printf("%d", X++);
			}
			else if(j >= i){
				printf("%d ", X++);
			}
		}
		
		if(i != N){
			printf("\n");
		}
	}
	
	return 0;
}

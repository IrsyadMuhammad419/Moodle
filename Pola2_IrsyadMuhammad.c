/*Program		: Pola2.c
Deskripsi		: membuat pola seperti pada contoh input dan contoh output.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<math.h>
int main(){
	
	//declare
	
	int i, j, N, X;
	
	//assign
	scanf("%d",&N);
	
	for(i = 1; i <= N; i++){
		for(j = 0; j < i; j++){
			
			if(j == i - 1){
				printf("%d", X=1);
			}
			else{
				printf("%d ",X = pow(2,i-j-1) );
			}
		}
		
		if(i != N){
			printf("\n");
		}
	}
	
	return 0;
}

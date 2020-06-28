/*Program		: PerkalianMatriks.c
Deskripsi		: menampilkan posisi kemunculan huruf vokal yang ada di sebuah array 2 dimensi berordo 3 × 3
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	int M1[76][76], M2[76][76], result = 0;
	int A, B, C, D, i, j, k;
	
	//assignment first matrix
	scanf("%d %d", &A, &B);
	
	for(i=0; i<A; i++){
		for(j=0; j<B; j++){
			scanf("%d", &M1[i][j]);
		}
	}
	
	//assignment second matrix
	scanf("%d %d", &C, &D);
	
	for(i=0; i<C; i++){
		for(j=0; j<D; j++){
			scanf("%d", &M2[i][j]);
		}
	}
	
	//multiple
	if(B == C){
		for(i=0; i < A; i++){
				for(j=0; j < D; j++){
					for(k=0; k < B; k++){
						result += M1[i][k] * M2[k][j];
					}
					if(j == D - 1)
						printf("%d",result);
					else
						printf("%d ",result);
				
					
					result = 0;
				}
				printf("\n");
			}
		}
	
	return 0;
}

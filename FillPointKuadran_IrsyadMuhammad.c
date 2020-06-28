/*Program		: FillPointKuadran.c
Deskripsi		: Memeriksa banyak point yg berada di suatu kuadran
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
//#include<stdbool.h>

typedef struct {
        int x;
        int y;
} Point;

int main(){
	
	//declare
	int i, j=0, M, N, total = 0;
	Point coor[10], B[10];
//	bool cpy = false;
	
	//assignment
	scanf("%d", &M);
	
	for (i = 0; i < M; i++){
		scanf("%d %d", &coor[i].x, &coor[i].y);
	}
	
	//which quadrant?
	scanf("%d", &N);
	
	switch (N){
		case 1: 
			for(i = 0; i < M; i++){
				if (coor[i].x > 0 && coor[i].y > 0){
					total += 1;
					B[j] = coor[i];
					j++;
				}
			}break;
			
		case 2:
			for(i = 0; i < M; i++){
				if (coor[i].x < 0 && coor[i].y > 0){
					total += 1;
					B[j] = coor[i];
					j++;
				}
			}break;
			
		case 3:
			for(i = 0; i < M; i++){
				if (coor[i].x < 0 && coor[i].y < 0){
					total += 1;
					B[j] = coor[i];
					j++;
				}
			}break;
			
		case 4:
			for(i = 0; i < M; i++){
				if (coor[i].x > 0 && coor[i].y < 0){
					total += 1;
					B[j] = coor[i];
					j++;
				}
			}break;
	}
	
	printf("%d\n", total);
	for(i = 0; i < total; i++){
		printf("%d %d\n",B[i].x, B[i].y);
	}
	
	return 0;
}

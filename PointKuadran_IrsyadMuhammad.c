/*Program		: PointKuadran.c
Deskripsi		: Memeriksa banyak point yg berada di suatu kuadran
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

typedef struct {
        int x;
        int y;
} Point;

int main(){
	
	//declare
	int i,M,N, total = 0;
	Point coor[10];
	
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
				if (coor[i].x > 0 && coor[i].y > 0)
					total += 1;
			}break;
			
		case 2:
			for(i = 0; i < M; i++){
				if (coor[i].x < 0 && coor[i].y > 0)
					total += 1;
			}break;
			
		case 3:
			for(i = 0; i < M; i++){
				if (coor[i].x < 0 && coor[i].y < 0)
					total += 1;
			}break;
			
		case 4:
			for(i = 0; i < M; i++){
				if (coor[i].x > 0 && coor[i].y < 0)
					total += 1;
			}break;
	}
	
	printf("%d", total);
	
	return 0;
}

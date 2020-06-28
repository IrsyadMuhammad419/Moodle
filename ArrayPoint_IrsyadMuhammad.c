/*Program		: ArrayPoint.c
Deskripsi		: Memeriksa similaritas dari array of point
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<stdbool.h>

typedef struct {
        int x;
        int y;
} Point;

int main(){
	
	//declare
	Point M[5], N[5];
	int i;
	bool cmp = true;
	
	
	for (i=0; i<5;i++){
		scanf("%d %d", &M[i].x, &M[i].y);
	}
	
	for(i=0;i<5;i++){
		scanf("%d %d", &N[i].x, &N[i].y);
	}
	
	for(i=0;i<5;i++){
		if(M[i].x != N[i].x || M[i].y != N[i].y){
			cmp = false;
			break;
		}
	}

	if(cmp == true)
		printf("sama");
	else
		printf("tidak sama");
			
	return 0;
}

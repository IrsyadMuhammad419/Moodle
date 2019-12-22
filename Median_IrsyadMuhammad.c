/*
Program			: Median_IrsyadMuhammad.c
Deskripsi		: Program untuk menghitung selisih bilangan terbesar dan bilangan terkecil dari suatu array
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/13 Desember 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	int N, i, bil[21];
	
	/*algoritma*/
	scanf("%d",&N);
		
	for(i=0;i<N;i++){ //memasukkan array sejulah N yang diinput
		scanf("%d",&bil[i]);
	}
	
	if(N%2==0){
		printf("%.1f\n", (float)((bil[N/2])+(bil[N/2-1]))/2);
	}
	
	else{
		printf("%.1f\n", (float)(bil[N/2]));
	}
	return 0;
}

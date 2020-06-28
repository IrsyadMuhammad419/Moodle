/* 
Program			: Barisan1.c
Deskripsi		: membuat array yang berisi angka berpola
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

int main(){
	
	//data dictionary
	int x[15];
	int start, j;
	
	//initialize
	int i = 0; 
	
	scanf("%d", &start);
	
	for(i = 0; i < 15; i++){
		
		//set the first index with start number
		if(i == 0)
			x[0] = start;
		
		else{
			
			//assign j with i for addition purpose
			j = i;
			
			//reduce value of j until it's value 1,2, or 3
			while(j > 3){
				j -=3;
			}
			
			//the addition depends on the condition
			//if j = 1, the previous number will be added by 3
			//if j = 2, the previous number will be added by 4
			//if j = 3, the previous number will be added by 5
			
			if (j == 1){
			
				x[i] = x[i-1] + 3;
			}
			else if(j == 2){
			
				x[i] = x[i-1] + 4;
			}
			else{
			
				x[i] = x[i-1] + 5;
			}
		}	
		
		if(i<14)
			printf("%d ", x[i]);
		else
			printf("%d", x[i]);
	}
	
	return 0;
}

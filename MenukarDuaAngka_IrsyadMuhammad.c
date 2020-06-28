/* 
Program			: Swap.c
Deskripsi		: menukar dua angka menggunakan prosedur
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

void swap(long int *a, long int *b){
	
	//var for temporary value
	long int temp;
	
	//swapping
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	//data dictionary
	long int a, b;
	
	//assign data
	scanf("%li %li", &a, &b);
	swap(&a, &b);
	printf("%li %Li", a, b);
	
	return 0;
}

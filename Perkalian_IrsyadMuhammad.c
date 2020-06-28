/* 
Program			: Perkalian.c
Deskripsi		: mengalikan dua angka menggunakan modular
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

int times(int a, int b){
	
	return a*b;
}

int main(){
	
	//data dictionary
	int a, b;
	
	//assign data
	scanf("%i %i", &a, &b);
	
	printf("%i",times(a,b));
	
	return 0;
}

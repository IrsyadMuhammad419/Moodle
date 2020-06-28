/* 
Program			: Perpangkatan.c
Deskripsi		: perpangkatan dua angka menggunakan modular
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

int power(int a, int b){
	
	if(b == 0)
		return 1;
	else if(b % 2 == 0)
		return power(a, b/2)*power(a, b/2);
	else 
		return a*power(a,b/2)*power(a,b/2);
	
	return a;
}

int main(){
	
	//data dictionary
	int a, b;
	
	//assign data
	scanf("%i %i", &a, &b);
	
	printf("%i",power(a, b));
	
	return 0;
}


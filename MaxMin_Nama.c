/* 
Program			: MaxMin.c
Deskripsi		: menentukan nilai max dan min menggunakan modular
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

int max(int a, int b){

	if(a > b)
		return a;
	else
		return b;
	
}

int min(int a, int b){
	
	if(a < b)
		return a;
	else
		return b;
}

int main(){
	
	//data dictionary
	int a, b;
	
	//assign data
	scanf("%d %d", &a, &b);
	
	//print
	printf("%d %d", max(a,b), min(a,b));
	
	return 0;
}

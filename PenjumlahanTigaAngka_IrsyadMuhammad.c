/* 
Program			: PenjumlahanTigaAngka.c
Deskripsi		: menghitung 3 angka menggunakan function
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

long int add(long int a, long int b, long int c){
	
	return a+b+c;
}

int main(){
	
	//data dictionary
	long int a, b, c;
	
	//assign var a, b, c
	scanf("%li %li %li",& a, &b, &c);
	
	//call the function & print
	printf("%li",add(a,b,c));
	
	return 0;
}

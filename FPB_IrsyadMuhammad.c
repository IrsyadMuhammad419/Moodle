/* 
Program			: FPB.c
Deskripsi		: mencari nilai fpb dari 2 bilangan bulat
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>
int gcd(int a, int b){
	
	if(a == 0)
		return b;
		
	if (b == 0)
		return a;
	
	if(a > b)
		return gcd(a - b, b);
		
	return gcd(a, b - a);
}

int main(){
	
	//data dictionary
	int a, b;
	
	
	//assign a and b
	scanf("%d %d", &a, &b);
	
	printf("%d", gcd(a, b));
	
	return 0;
}



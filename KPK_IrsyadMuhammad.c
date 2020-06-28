/* 
Program			: KPK.c
Deskripsi		: mencari nilai KPK dari 2 bilangan bulat
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

//greatest common divisor
int gcd(int a, int b){
	
	if(a == 0)
		return b;
		
	if (b == 0)
		return a;
	
	if(a > b)
		return gcd(a - b, b);
		
	return gcd(a, b - a);
}

int lcm (int a, int b){
	
	//lcm = number a * number b / gcd a and b
	return (a*b)/gcd(a, b);
}

int main(){
	
	//data dictionary
	int a, b;
	
	//assign a and b
	scanf("%d %d", &a, &b);
	
	//print the result
	printf("%d",lcm(a, b));
		
	return 0;
}

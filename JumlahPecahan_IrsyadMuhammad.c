/* 
Program			: JumlahPecahan.c
Deskripsi		: menghitung pecahan
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

long long int gcd(long long int a, long long int b){
   
    if (a == 0){
        return b;
    }

    return gcd(b % a, a);
}

long long int lcm (long long int a, long long int b){
	
	//lcm = number a * number b / gcd a and b
	return (a*b)/gcd(a, b);
}

int main(){
	
	//data dictionary
	long long int A, B, C, D, E, F, div;
	
	//assign the numbers
	scanf("%lli %lli %lli %lli", &A, &B, &C, &D);
	

	//denominator
	F = lcm(B, D);
	
	//denominator are not same
	//how to solve it?
	//first, use least commont multiple(lcm) to equalize the denominator
	//then multiple the numerator with lcm denominator divided by denominator
	//add first numerator and second numerator
	//put the denominator
	E = (F / B) * A + C * (F / D);
	
	printf("%lli %lli\n", E/gcd(E, F), F/gcd(E,F));
	
	return 0;
}

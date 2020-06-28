/*Program		: DecimalToRoman.c
Deskripsi		: mengubah input decimal menjadi romawi
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/29 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<string.h>

int main(){
	
	//declare
	int decimal;
	
	//assign
	scanf("%d",&decimal);
	
	while(decimal != 0){
		
		if(decimal >= 1000){
			
			printf("M");
			decimal = decimal - 1000;
		}
		else if(decimal >=900){
			
			printf("CM");
			decimal = decimal - 900;
		}
		else if(decimal >= 500){
			
			printf("D");
			decimal = decimal - 500;
		}
		else if(decimal >= 400){
			
			printf("CD");
			decimal = decimal - 400;
		}
		else if(decimal >= 100){
			
			printf("C");
			decimal = decimal - 100;
		}
		else if(decimal >= 90){
			
			printf("XC");
			decimal = decimal - 90;
		}
		else if(decimal >= 50){
			
			printf("L");
			decimal = decimal - 50;
		}
		else if(decimal >= 40){
			
			printf("XL");
			decimal = decimal - 40;
		}
		else if(decimal >= 10){
			
			printf("X");
			decimal = decimal - 10;
		}
		else if(decimal >= 9){
			
			printf("IX");
			decimal = decimal - 9;
		}
		else if(decimal >= 5){
			
			printf("V");
			decimal = decimal - 5;
		}
		else if(decimal >= 1){
			printf("I");
			decimal = decimal - 1;
		}
	}
	
	return 0;
}

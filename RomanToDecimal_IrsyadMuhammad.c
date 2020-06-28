/*Program		: RomanToDecimal.c
Deskripsi		: mengubah input romawi menjadi desimal
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/29 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<string.h>

int main(){
	
	//declare
	int tempDecimal[16];
	char roman[16];
	
	//initialize
	int decimal = 0;
	int i = 0; 
	
	//assign roman to program
	scanf("%s",&roman);
	
	
	//converting to decimal
	for(i = 0; i < strlen(roman); i++){
		
		switch(roman[i]){
			case 'I' :
				tempDecimal[i] = 1;
				break;
				
			case 'V' :
				tempDecimal[i] = 5;
				break;
			
			case 'X' :
				tempDecimal[i] = 10;
				break;
				
			case 'L' :
				tempDecimal[i] = 50;
				break;
				
			case 'C' :
				tempDecimal[i] = 100;
				break;
				
			case 'D' :
				tempDecimal[i] = 500;
				break;
				
			case 'M' :
				tempDecimal[i] = 1000;
				break;
				
			default:
				//if the input is none of above
				break;
		}
	}
	
	//set itteration from first element
	i = 0;
	//add up all string
	while(roman[i]){
		
		if(tempDecimal[i] >= tempDecimal[i+1])
			//example : XI or DV
			decimal += tempDecimal[i];
	
		else
			//example: IX or VD
			//I will be negative and X will be positive 
			decimal -= tempDecimal[i];
			
		i++;
	}
	
	printf("%d", decimal);
	return 0;
}

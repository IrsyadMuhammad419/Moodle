/*Program		: DesimalHeksa.c
Deskripsi		: mengubah input decimal menjadi heksadesimal
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	int decimal, hex[32];
	
	//initializie
	int i=0;
	
	//assign
	scanf("%d", &decimal);
	
	//loop untill decimal have a negative value
	while(decimal > 0){
		
		//assign the modulus of decimal
		//the result will be mirrored hex
		hex[i] = decimal%16;
		
		//divide decimal
		decimal /= 16;
		
		//increment
		i++;
	}
	
	//reverese print hex
	for(i -= 1 ; i >= 0 ; i--){
		
		if(hex[i] > 9){
			
			//change 10 - 15 with A - F
			switch(hex[i]){
				
				case 10:
					printf("A");
					break;
					
				case 11:
					printf("B");
					break;
					
				case 12:
					printf("C");
					break;	
					
				case 13:
					printf("D");
					break;
					
				case 14:
					printf("E");
					break;
					
				case 15:
					printf("F");
					break;
			}
		}
		else{
			
			//hex value is under 10
			printf("%d",hex[i]);
		}
	}
	
	return 0;
}

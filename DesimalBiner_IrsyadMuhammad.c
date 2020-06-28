/*Program		: DesimalBiner.c
Deskripsi		: mengubah input decimal menjadi biner
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

int main(){
	
	//declare
	int decimal, binary[32];
	
	//initializie
	int i=0;
	
	//assign
	scanf("%d", &decimal);
	
	//loop untill decimal have a negative value
	while(decimal > 0){
		
		//assign the modulus of decimal
		//the result will be mirrored binary
		binary[i] = decimal%2;
		
		//divide decimal
		decimal /= 2;
		
		//increment
		i++;
	}
	
	//reverese print binary
	for(i -= 1 ; i >= 0 ; i--){
		printf("%d", binary[i]);
	}
	
	return 0;
}

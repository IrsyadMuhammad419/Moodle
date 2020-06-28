/*Program		: DesimalBiner.c
Deskripsi		: mengubah input decimal menjadi biner
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	
	//declare
	char binary[32]; 
	
	//initialize
	int i = 0, times = 0;
	int decimal = 0;
	gets(binary);
	
	//reverse the binary
	for(i = strlen(binary)-1; i >= 0 ; i--){
		
		//count the decimal
		decimal += ((int)binary[i] - '0') * pow(2,times);
		
		//raise the power
		times++;
	}
	
	printf("%d\n", decimal);
	return 0;
}

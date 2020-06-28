/*Program		: No4.c
Deskripsi		: menghitung banyaknya bilangan antara x dan y yang tidak mengandung akhiran angka 4 (atau -4).
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/28 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	//declare
	int x, y, i, count = 0;
	
	//assign
	scanf("%d %d",&x,&y);
	
	for(i = x + 1; i < y; i++){
		if(abs(i) % 10 != 4){
			
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}

/*Program		: Reverse.c
Deskripsi		: Membalik array yang dimasukkan 
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<string.h>

int main(){
	//declare
	char text[10];
	int i,N = 0;
	
	//inputing text
	gets(text);
	
	//reversing
	for(i=strlen(text); i>N; i--)
		//print from last char in array
		printf("%c",text[i-1]);
		
	return 0;
}

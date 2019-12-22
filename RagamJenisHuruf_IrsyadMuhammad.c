/* 	
Program			: RagamHuruf_IrsyadMuhammad.c
Deskripsi		: Menghitung ragam jenis huruf dari sebuah string yang dibaca
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/1 November 2019
Compiler		: Dev C++ 5.1.1
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
int main(){

	/*deklarasi*/
	char x[26];
	int i,j,N,jenis;
	bool sama = false;
	
	/*algoritma*/
	gets(x);
	jenis=0;
	N=strlen(x);
	
	for(i=0;i<N;i++){
		sama = false;
		for(j=0;j<i;j++){
			if(tolower(x[j])==tolower(x[i])){
			sama = true;
			break;
			}
		}
		if(!sama){
			jenis=jenis+1;	
		}
	}
	printf("%d\n",jenis);
	return 0;
}

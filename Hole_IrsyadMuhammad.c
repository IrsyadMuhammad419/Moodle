/* 	
Program			: Holes_IrsyadMuhammad.c
Deskripsi		: Menghitung ragam jenis huruf dari sebuah 
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/1 November 2019
Compiler		: Dev C++ 5.1.1
*/
#include<stdio.h>
#include<string.h>

int main(){
	/*deklarasi*/
	int hole,i;
	char x[50];
	
	/*algoritma*/
	hole=0;
	scanf("%[^\n]",&x);
	for(i=0;i<strlen(x);i++){
		switch(x[i]){
			case 'Q':hole=hole+1;break;
			case 'B':hole=hole+2;break;
			case 'R':hole=hole+1;break;
			case 'O':hole=hole+1;break;
			case 'P':hole=hole+1;break;
			case 'A':hole=hole+1;break;
			case 'D':hole=hole+1;break;
		}
	}
	printf("%d",hole);
	return 0;
}

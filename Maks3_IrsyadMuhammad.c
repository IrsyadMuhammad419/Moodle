/*
Program			: Maks3_IrsyadMuhammad.c
Deskripsi		: Menentukan bilangan terbesar dari 3 bilangan yang dimasukkan
Nama			: Irsyad Muhammad
Tanggal/Versi	: 27 Oktober 2019/ 01
Compiler		: Dev c++ 5.11
*/

#include<stdio.h>

int main(){
	/*deklarasi*/
	int A,B,C;
	int maks;
	
	/*algoritma*/
	scanf("%d\n %d %d",&A,&B,&C);
	if(A<B){
		maks=B;
	}
	if(B<C){
		maks=C;
	}
	if(A>maks){
		maks=A;
	}
	printf("%d",maks);
	return 0;
}

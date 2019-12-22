/*
Program			: WujudBenda_Irsyad Muhammad.c
Deskripsi		: Menentukan wujud suatu benda jika diketahui suhunya
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/20 Oktober 2019
Compiler		: Dev c++ 5.1.1
*/

#include<stdio.h>

int main(){
	
	/*deklarasi*/
	float suhu;
	
	/*algoritma*/
	scanf("%f",&suhu);
	if (suhu >=0 && suhu <=100){
		printf("berwujud cair\n");
	}
	else{
		printf("berwujud non cair\n");
	}
	return 0;
}

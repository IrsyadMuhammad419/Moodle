/* 	
Program			: Basic I/O 2
Deskripsi		: Menampilkan semua bilangan bulat dari X  hingga  Y dalam satu baris (dipisahkan oleh 1 spasi, dan setelah nilai terkahir diberi enter).
Author			: Irsyad Muhammad
Versi/Tanggal	: 03/18 Oktober 2019
Compiler		: Dev C++ 5.1.1
*/
#include<stdio.h>
int main(){

//deklarasi//
int number,X,Y;

//Algoritma//
scanf("%d %d",&X,&Y);
for (number=X;number<=Y;number++){
	if(X >=0 && X <=100 && Y >=0 && Y <=100){								//Nilai X dan Y yang boleh diinput adalah dari 0 sampai 100 saja
		if(Y==number){														//Logika if akan menampilkan bilangan bulat dari X sampai Y
			printf("%d",number);
		}
		else{
			printf("%d ",number);
		}
	}
	else{																	//Nilai X atau Y yang diinput melebihi 0 sampai 100 tidak akan menampilkan bilangan bulat dari X sampai Y
		printf("Nilai X atau Y yang diinput melebihi range 0 sampai 100");
		break;
	}
}
return 0;
}

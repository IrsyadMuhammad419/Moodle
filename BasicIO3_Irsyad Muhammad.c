/* 	
Program			: Basic I/O 3
Deskripsi		: Menampilkan semua bilangan bulat dari X  hingga  Y dalam satu baris
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/18 Oktober 2019
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
			printf("%d\n",number);										
		}
	}
	else{																	//Nilai X atau Y yang diinput melebihi 0 sampai 100 tidak akan menampilkan bilangan bulat dari X sampai Y
		printf("Nilai X atau Y yang diinput melebihi range 0 sampai 100");
		break;
	}
}
return 0;
}

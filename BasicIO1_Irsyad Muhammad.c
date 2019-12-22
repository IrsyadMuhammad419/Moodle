/* 	
Program			: Basic I/O 1
Deskripsi		: Menampilkan bilangan X (0 <= X <= 100).yang tepat dua kali lipat dari bilangan yang berasal dari inputan pengguna
Author			: Irsyad Muhammad
Versi/Tanggal	: 04/18 Oktober 2019
Compiler		: Dev C++ 5.1.1
*/
#include<stdio.h>
int main(){
	
//deklarasi//
int number;

//algoritma//
scanf("%d",&number);
if(number >=0 && number <=100){
	number = number*2;
	printf("%d",number);
}
else{
	printf("Nilai X yang dimasukkan di luar 0 sampai 100"); //program akan keluar apabila nilai X yang diinput diluar range 0 sampai 100//
}
return 0;
}

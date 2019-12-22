/*
Program			: SOS_IrsyadMuhammad.c
Deskripsi		: menampilkan jumlah s-o-s yang terbentuk
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/08 November 2019
Compiler		: Dev c++ 5.1.1
Lama pengerjaan	: 08.00-09.23 (1 jam 23 menit)
*/

#include<stdio.h>

int main(){
	/*deklarasi*/
	char sos[4][4];
	char input;
	int i,count;
	
	/*algoritma*/
	count=0;
	for(i=0;i<3;i++){		//menginput huruf s atau o
		scanf(" %c %c %c",&sos[i][0],&sos[i][1],&sos[i][2]);
	}

	/*kondisi untuk horizontal*/
	if(sos[0][0]==sos[0][2] && sos[0][1]=='O' && sos[0][0] !='O'){
		count=count+1;
	}
	if(sos[1][0]==sos[1][2] && sos[1][1]=='O' && sos[1][0] !='O'){
		count=count+1;	
	}
	if(sos[2][0]==sos[2][2] && sos[2][1]=='O' && sos[2][0] !='O'){ 
		count=count+1;
	}

	/*kondisi untuk vertikal*/

	if(sos[0][0]==sos[2][0] && sos[1][0]=='O' && sos[0][0] !='O'){
		count=count+1;
	}
	if(sos[0][1]==sos[2][1] && sos[1][1]=='O' && sos[0][1] !='O'){
		count=count+1;
	}
	if(sos[0][2]==sos[2][2] && sos[1][2]=='O' && sos[2][2] !='O'){
		count=count+1;
	}
	
	/*kondisi untuk cross*/
	
	if(sos[0][0]==sos[2][2] && sos[1][1]=='O' && sos[0][0] !='O'){
		count=count+1;
	}
	if(sos[2][2]==sos[2][0] && sos[1][1]=='O' && sos[2][2] !='O'){
		count=count+1;
	}
	
	printf("%d",count);
	return 0;
}

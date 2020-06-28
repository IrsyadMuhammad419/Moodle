/* 
Program			: Dibawah.c
Deskripsi		: mengetahui berapa banyak muridnya yang bermasalah
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

int main(){
	
	//data dictionary
	int N;
	int grade[10001];
	
	//initialize
	int prob = 0, i = 0;
	float average = 0;
	
	//assignment how much student(s)
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		
		scanf("%d", &grade[i]);
		average += grade[i];	
	}
	
	average /= N;
	
	//check if the grade smaller than the average	
	for(i = 0; i < N; i++){
	
		if(grade[i] < average)
			prob++;
	}
	
	printf("%d", prob);
	
	return 0;
}


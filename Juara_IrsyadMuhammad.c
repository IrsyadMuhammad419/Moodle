/* 
Program			: Juara.c
Deskripsi		: Mengetaui yang mendapat juara di kedua bidang.
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
	
	//data dictionary
	int N, O;
	char chess[6][30], badminton[6][30];
	
	//initialize
	int i = 0, j = 0;
	bool isChampionExist = false;
	
	//assign how much chess champions
	scanf("%d", &N);
	
	//assign champion
	for(i = 0; i < N; i++){
		
		scanf(" %[^\n]", &chess[i]);
	}
	
	//assign how much badminton champions
	scanf(" %d", &O);
	
	//assign champion
	for(i = 0; i < O; i++){
		
		scanf(" %[^\n]", &badminton[i]);
	}
	
	//check if there is the same name
	for(i = 0; i < N; i++){
		
		for(j = 0; j < O; j++){
			
			if(strcmp(chess[i], badminton[j]) == 0){
				//same name found
				printf("%s\n",chess[i]);
				
				//the champion is exist, then bool should be true
				isChampionExist = true;
			}
				
		}
	}
	
	if(isChampionExist == false)
		printf("tidak ada sang juara\n");
		
	return 0;
}


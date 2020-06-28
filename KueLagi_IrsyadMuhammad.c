/* 
Program			: KueLagi.c
Deskripsi		: Kedua buah kue dapat dikatakan sama apabila kesamaan komposisi keduanya lebih dari atau sama dengan N% (urutan komposisi kue tidak dipermasalahkan).
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>
#include<string.h>

int main(){
	
	//data dictionary
	char L[9][9], K[9][9];
	int P, Q;
	float N;
	
	//itteration variable
	int i, j;
	
	//initialize
	int equal = 0;
	
	//assign precentage
	scanf("%f", &N);
	
	//assign how much the ingredients L's Cake needed
	scanf("%d", &P);
	
	//assign the ingredients L's cake needed
	for(i = 0; i < P; i++){
		
		scanf("%s", &L[i]);
	}
	
	//assign how much the ingredients K's cake needed
	scanf("%d", &Q);
	
	//assign the ingredients
	for(j = 0; j < Q; j++){
		
		scanf("%s", &K[j]);
	}
	
	//check if the ingredients are the same 
	for(i = 0; i < P; i++){
		
		for(j = 0; j < Q; j++){
		
			if(strcmp(L[i], K[j]) == 0){
				
				equal++;
			}
		}
	}
	
	//print "sama" or "tidak sama" according to conditions below	
	//P == Q : The amount of ingredients P and Q is the same
		//the precentage using P or Q as a divisor
	//P < Q : The amount of P is less than Q
	//P > Q : the amount of Q is less than Q
		//the precentage using a smaller divisor
	if(P == Q){
		
		if((float) equal/P*100 >= N)
			printf("sama\n");
		else
			printf("tidak sama\n");
			
	}
	else if(P < Q){
	
		if((float) equal/P*100 >= N)
			printf("sama\n");
		else
			printf("tidak sama\n");
	}
	else{
		
		if((float) equal/Q*100 >= N)
			printf("sama\n");
		else
			printf("tidak sama\n");
	}
	
		
	return 0;
}

/* -----------------------------------------------
Program :Right_IrsyadMuhammad.c
Deskripsi : menampilkan N buah karakter dari sebuah array karakter
Author :Irsyad Muhammad
Versi / tanggal :01/31 Oktober 2019
Compiler : Xcode
---------------------------------------------------*/
#include <stdio.h>
#include<string.h>

int main(){
    int i,N,angkadibawahtulisan;
    char x[31];
    
    gets(x);
    N=strlen(x);
    scanf("%d",&angkadibawahtulisan);
    for(i=N-Awal;i<N;i++){
        printf("%c", x[i]);
    }
    return 0;
}


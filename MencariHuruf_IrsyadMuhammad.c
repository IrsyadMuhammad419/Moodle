/* -----------------------------------------------
Program :MencariHuruf_IrsyadMuhammad.c
Deskripsi :memeriksa suatu huruf berada di array X atau tidak
Author : Irsyad Muhammad
Versi / tanggal :01/31 Oktober 2019
Compiler : Xcode
---------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main(){
    char x[10] = "JTKPolban", cek;
    int i, ada=0;
    scanf("%c",&cek);
    for(i=0; i<9; i++  ){
        if(tolower(cek)==tolower(x[i])){
            ada = 1;
            printf("ada\n");break;
        }
        
    }
    if (ada==0) {
        printf("tidak ada\n");
    }
    return 0;
}

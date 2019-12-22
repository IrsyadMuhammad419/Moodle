/* -----------------------------------------------
Program :Alay_IrsyadMuhammad.c
Deskripsi :membuat program untuk mengubah teks menjadi bentuk alay
Author : Irsyad
Versi / tanggal :01/31 Oktober 2019
Compiler : Xcode
---------------------------------------------------*/
#include <stdio.h>

int main()
{
    char kal[51];
    int panjang, i;
    
    //algoritma
    gets(kal);
    panjang=strlen(kal);
    for(i=0;i<panjang;i++){
        /*depend on*/
        switch(kal[i]){
            case 'a b':kal[i]='4';break;
            case 'A':kal[i]='4';break;
            case 'i':kal[i]='1';break;
            case 'I':kal[i]='1';break;
            case 'e':kal[i]='3';break;

            default:break;
        }
        
        
    }
    printf("%s\n",kal);
    return 0;
}

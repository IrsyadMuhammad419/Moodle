/* 	
Program			: CountPrima_IrsyadMuhammad.c
Deskripsi		: Menentukan jumlah bilangan prima dalam sebuah array
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 15 November 2019
Compiler		: Dev C++ 5.1.1
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int i,k,j,x,jml;
    int himp[10];
    bool habisterbagi = false;
    i=2;
    jml = 0;
    
    for (j=0; j<10; j++) {
        scanf("%d", &himp[j]);
    }
    
    for (x=0; x<10; x++){
        i = 2;
        habisterbagi = false;
        k = himp[x]-1;
        if (himp[x]>2){
            while ((i<=k) && (!habisterbagi)){
                if ((himp[x]%i)==0) {
                    habisterbagi = true;
                } else {
                    i = i+1;
                }
            }
        } else if(himp[x]<2){
            habisterbagi = true;
        }
            
        if(!habisterbagi){
            jml = jml + 1;
        }
    }
    printf("%d\n", jml);
    return 0;

}

/*
Program			: CountTriples_IrsyadMuhammad.c
Deskripsi		: Menghitung kemunculan 3 buah huruf berpasangan yang ada dalam sebuah array karakter
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/19 Desember 2019
Compiler		: TDM-GCC 4.9.2 64
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
//deklarasi
    char input[41], huruf1, huruf2, huruf3;
    int i = 0, hitung = 0;

//algoritma
    gets(input);
    scanf("%c %c %c", &huruf1, &huruf2, &huruf3);

    while (i <= strlen(input) - 2)
    {
        if (tolower(input[i]) == tolower(huruf1) && tolower(input[i + 1]) == tolower(huruf2) && tolower(input[i + 2]) == tolower(huruf3))
        {
            hitung++;
        }

        i++;
        
    }
    
    printf("%d\n", hitung);

    return 0;
}

/* 	
Program			: Kue_IrsyadMuhammad.c
Deskripsi		: Menentukan apakah kompisis kue K dan kue L sama atau tidak
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 12 Desember 2019
Compiler		: Dev C++ 5.1.1
*/

#include<stdio.h>
#include<string.h>
int main() {
	
	/*Deklarasi*/
    int i, j, ada, sama;
    char kue1[9], kue2[9];
    float persen, kesamaan;

	/*Algoritma*/
	
	/*memasukkan presentasi kesamaan komposisi kue*/
    scanf("%f", &persen);

    for (i = 0; i < 9; i++)
    {
        scanf("%c", &kue1[i]);
    }

    for (i = 0; i < 9; i++)
    {
        scanf("%c", &kue2[i]);
    }

    for (i = 0; i < 9; i++)
    {
        ada = 0;
        j = 0;

        while (ada != 1 && j < 9)
        {
            if (kue1[i] == kue2[j])
            {
                ada = 1;
                sama++;
            }

            j++;
        }
        
    }

    kesamaan = (float) sama / 8 * 100;
    if (kesamaan > persen)
    {
        printf("sama\n");
    }
    else
    {
        printf("tidak sama\n");
    }
    
    return 0;
}

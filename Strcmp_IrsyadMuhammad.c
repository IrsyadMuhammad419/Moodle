/*
Program			: Strcmp_IrsyadMuhammad.c
Deskripsi		: Program untuk menghitung selisih bilangan terbesar dan bilangan terkecil dari suatu array
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/19 Desember 2019
Compiler		: TDM-GCC 4.9.2 64
*/

#include<stdio.h>
#include<string.h>

int main() {
    //Declaration
    char str1[11], str2[11];
    int i = 0, sama = 0;

    //Process
    gets(str1);
    gets(str2);

    for (i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] - str2[i] > 0)
            {
                printf("+%d\n", str1[i] - str2[i]);
            }
            else
            {
                printf("%d\n", str1[i] - str2[i]);
            }
            
            printf("%d\n", i + 1);

            sama = 0;

            break;
        }
        else
        {
            sama = 1;
        }

    }

    if (sama == 1)
    {
        printf("0\n0\n");
    }
    
    
    return 0;
}

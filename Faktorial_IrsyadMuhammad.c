/* 
Program			: Factorial.c
Deskripsi		: faktorial menggunakan modular
Author			: Irsyad Muhammad
Versi/Tanggal	: 01/ 04 Mei 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release*/

#include<stdio.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {

    if(n == 1){
        return a;
    }
    else if (n == 2) {
        return a+b;
    }
    else if(n == 3){
        return a+b+c;
    }
    else {
        return (find_nth_term(n-1, a, b, c) + find_nth_term(n, a, b, c));
    }
}


int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}


#include "coder.h"
#include <stdio.h>
#define SIZE_ARRAY 55

//FILE *fput;

//fput = fopen("t2.txt", "a");

void ShiftTo(int a[5][SIZE_ARRAY], int to, int since)
{
int i, j;
     for (j = 0; j < to; j++){
         for (i = since; i < SIZE_ARRAY - since; i++){
             a[0][SIZE_ARRAY - i] = a[0][SIZE_ARRAY - i - 1];
         }
     }

}

void Insert(int a[5][SIZE_ARRAY], int since, int what, int quantity)
{
int i, del = 1;
    for (i = (since + quantity); i > since; i--){
        a[0][i - 1] = what % 10;
        what = what / 10;

    }

}

//fclose(f2);


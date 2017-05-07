#include "coder.h"
#include <stdio.h>
#define SIZE_ARRAY 7

//FILE *fput;

//fput = fopen("t2.txt", "a");

void cod_16(char a[5][5], int k){
int i, j, cod[5][10] = {};    
    for (j = 0; j < k; j++){
        cod[0][0] = 1;
        cod[0][1] = 1;
        cod[0][2] = 1;
        cod[0][3] = 0;
        for ( i = 4; i < 8; i++)
            cod[0][i] = a[0][i-4];
        cod[1][0] = 1;
        cod[1][1] = 0;
        for (i = 2; i < 6; i++)
            cod[1][i] = a[1][i-2];
        for (i = 6; i < 8; i++)
            cod[1][i] = a[2][i-6];
        cod[2][0] = 1;
        cod[2][1] = 0;
        for (i = 2; i < 4; i++)
            cod[1][i] = a[2][i];
        for (i = 4; i < 8; i++)
            cod[2][i] = a[3][i-4];
        }

for (i = 0; i < 8; i++)
    printf ("%d", cod[0][i]);
printf("\n");

for (i = 0; i < 8; i++)
    printf ("%d", cod[1][i]);
printf("\n");

for (i = 0; i < 8; i++)
    printf ("%d", cod[2][i]);
printf("\n");
 
}

void cod_7(char a[5][5], int k){
int i, j, cod[5][10] = {};
    for (j = 0; j < k; j++){
        cod[0][0] = 0;
        for (i = 1; i < 4; i++)
            cod[0][i] = a[j][i - 1];
    }
for (i = 0; i < 4; i++)
    printf ("%d", cod[0][i]);
printf("\n");

}

void cod_11(char a[5][4], int k, int num){
int i, j, z, cod[5][5] = {};
z = 11 - num;
         cod[0][0] = 1;
         cod[0][1] = 1;
         cod[0][2] = 0;
         for (i = 0; i < z; i++)
             cod[0][i + 3] = 0;
        //for (i = 0; a[i] != '\0'; i++);

         cod[1][0] = 1;
         cod[1][1] = 0;
printf("6 %d \n", cod[0][6]);
for (i = 0; i < 8; i++)
    printf ("%d", cod[0][i]);
printf("\n");
}

void ShiftTo(char a[1][SIZE_ARRAY], int to, int since){
int i, j;
     for (j = 0; j < to; j++){
         for (i = since; i < SIZE_ARRAY - since; i++){
             a[0][SIZE_ARRAY - i] = a[0][SIZE_ARRAY - i - 1];
         }
     }

}


//fclose(f2);


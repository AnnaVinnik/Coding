#include <stdio.h>
#include "coder.h"


int main()
{
FILE *fc, *fp;
int i, qtZero = 0, j, k = 0, k2 = 0, number = 0, significantNumbers = 0;
int arr[5] = {};  //массив с файла
int a[5][55] = {};  //массив с двоичным кодом чисел
char prob = {' '};


    fc = fopen("text.txt", "r");
    fp = fopen("t2.txt", "a");

    for (i = 0; i < 10; i++){
       arr[i] = fgetc (fc);
    }

//Подсчет символов в числе
    for (i = 0; arr[i] != 32; i++){
         k = k + 1;
    }


//Заполняем а[0] двоичным кодом числа
    for (j = 0; j < k; j++){
        if (arr[j] > 48 && arr[j] < 58){
            for (i = 0; i < 4; i++){
             a[0][(j + 1)*4 - i - 1] = ((arr[j]-48)>>i)&1;
            }
        }
        else if (arr[j] > 96 && arr[j] < 103){
            for (i = 0; i < 4; i++){
                a[0][(j + 1)*4 - i - 1] = ((arr[j]-87)>>i)&1;
            }
        }
    }

printf("k:%d\n", k);

//Подсчет первых нулей 
   for (i = 0; a[0][i] == 0; i++){
      qtZero = qtZero + 1;
   }
   printf ("qtZero %d \n", qtZero);

    significantNumbers = k*4 - qtZero;
    printf ("Significant numbers: %d \n", significantNumbers);

for (i = 0; i < (k + 1)*4; i++)
    fprintf(fp, "%d", a[0][i]);
    fputc(prob, fp);

    if (k == 1){
        ShiftTo(a, 4, 0);
        Insert(a, 0, 0000, 4);
        for (i = 0; i < 8; i++){
            fprintf(fp, "%d", a[0][i]);
        }
    }
    
    
    if (k == 2){
        ShiftTo(a, 3, 0);
        Insert(a, 0, 110, 3);
        ShiftTo(a, 2, 8);
        Insert(a, 8, 10, 2);
        for (i = 0; i < 16; i++){
            fprintf(fp, "%d", a[0][i]);
        }
        fputc(prob, fp);
     }

    if (k == 4 || k == 3){
        ShiftTo(a, 4, 0);
        Insert(a, 0, 1110, 4);
        ShiftTo(a, 2, 8);
        Insert(a, 8, 10, 2);
        ShiftTo(a, 2, 16);
        Insert(a, 16, 10, 2);
        for (i = 0; i < 24; i ++){
            fprintf(fp, "%d", a[0][i]);
        }
        fputc(prob, fp);
    }

    if (k == 5){
        ShiftTo(a, 5, 0);
        Insert(a, 0, 11110, 5);
        ShiftTo(a, 2, 8);
        Insert(a, 8, 10, 2);
        ShiftTo(a, 2, 16);
        Insert(a, 16, 10, 2);
        ShiftTo(a, 2, 24);
        Insert(a, 24, 10, 2);
        for (i = 0; i < 32; i++){
            fprintf(fp, "%d", a[0][i]);
        }
        fputc(prob, fp);
    }  



    fclose(fc);
    fclose(fp);
    return 0;
}

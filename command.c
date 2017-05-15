#include <stdio.h>
#include "coder.h"

int  encode_file(char *in_file_name,  char *out_file_name)
{
FILE *fd, *fc;
int i, qtZero = 0, j, k = 0, k2 = 0, number = 0, significantNumbers = 0, two = 8;
int arr[55] = {};  //массив с файла
int a[5][55] = {};  //массив с двоичным кодом чисел
char prob = {' '};
        fd = fopen(in_file_name, "r");
        fc = fopen(out_file_name, "a");

        for (i = 0; i < 10; i++){
            arr[i] = fgetc (fd);
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


//Подсчет первых нулей 
        for (i = 0; a[0][i] == 0; i++){
           qtZero = qtZero + 1;
        }

        significantNumbers = k*4 - qtZero;

        if (k == 1){
            ShiftTo(a, 4, 0);
            Insert(a, 0, 0000, 4);
            for (i = 0; i < 8; i++){
                fprintf(fc, "%d", a[0][i]);
            }
       }
    //if (argv[1][0] == coder[0]){
    
        if (k == 2){
            ShiftTo(a, 3, 0);
            Insert(a, 0, 110, 3);
           ShiftTo(a, 2, 8);
            Insert(a, 8, 10, 2);
           for (i = 0; i < 16; i++){
               fprintf(fc, "%d", a[0][i]);
            }
            fputc(prob, fc);
         }

       if (k == 4 || k == 3){
           ShiftTo(a, 4, 0);
           Insert(a, 0, 1110, 4);
            ShiftTo(a, 2, 8);
            Insert(a, 8, 10, 2);
            ShiftTo(a, 2, 16);
            Insert(a, 16, 10, 2);
            for (i = 0; i < 24; i ++){
                fprintf(fc, "%d", a[0][i]);
        }
            fputc(prob, fc);
        }
   // }

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
                fprintf(fc, "%d", a[0][i]);
            }
            fputc(prob, fc);
        }  

        fclose(fc);
        fclose(fd);
}

#include <stdio.h>
#include "coder.h"

int getNumber(int arr[55], FILE *fc)
{
int i, k = 0;
    for (i = 0; i < 8; i++){
        arr[i] = fgetc(fc) - 48;
    }
    for (i = 0; arr[i] == 1; i++){
        k = k + 1;
    }
    if (k > 1)
        return k;
    else getNumber(arr, fc);
}

int main(int argc, char *argv[])
{
FILE *fd, *fc;
int i, qtZero = 0, j, k = 0, k2 = 0, number = 0, significantNumbers = 0, two = 8;
int arr[55] = {};  //массив с файла
int a[5][55] = {};  //массив с двоичным кодом чисел
char prob = {' '};
char coder[6] = "coder", decoder[8] = "decoder";

 
    //if (argv[1][0] == coder[0]){
    
   // }

//Decoder
    if (argv[1][0] == decoder[0] && argv[1][1] == decoder[1]){

        fd = fopen(argv[3], "a");
        fc = fopen(argv[2], "r");
        clean(a[0]);
        clean(arr);
        k = 0;

        k = getNumber(arr, fc);

        for ( i = 8; i < k*8; i++){
            arr[i] = fgetc(fc) - 48;
        }

        Delete(arr, 16, 2);
        Delete(arr, 8, 2);
        Delete(arr, 0, k + 1);



        for(j = 0; j < k*4; j++){
            for (i = j*4; i < j*4 + 4; i++){
                a[0][j] = a[0][j] + arr[i]*two;
                two = two / 2;
            }
            two = 8;
        }
        

        for (i = 0; i < k*2; i++){
            if (a[0][i] > 9){
                a[0][i] = a[0][i] + 87;
            }
            else a[0][i] = a[0][i] + 48;
        }

        for (i = 0; i < k; i++){
            fprintf(fd, "%c", a[0][i]);
        }
        if (a[0][k] != 0 + 48)
            fprintf(fd, "%c", a[0][k]);
        fputc(prob, fd);
    

        fclose(fc);
        fclose(fd);
    }
    else printf("Usage:\ncoder encode <in-file-name> <out-file-name>\ncoder decode <in-file-name> <out-file-name>\n");
    return 0;
}

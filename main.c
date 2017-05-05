#include <stdio.h>
#include "coder.h"


int main()
{
FILE *fc;
int i, num = 0, j, k = 0, k2 = 0, number = 0;
int arr[5] = {};  //массив с файла
char a[5][22] = {};  //массив с двоичным кодом чисел


    fc = fopen("text.txt", "r");

    for (i = 0; i < 5; i++){
       arr[i] = fgetc (fc);
    }

//Подсчет символов в числе
    for (i = 0; arr[i] != 32; i++){
         k = k + 1;
    }
printf("k: %d \n", k);
printf ("arr[0]: %d \n", arr[0]);
//Заполняем а[0] двоичным кодом числа
    for (j = 0; j < k; j++){
        if (arr[j] > 48 && arr[j] < 58){
            for (i = 0; i < 4; i++){
             a[0][(j + 1)*4 - i - 1] = ((arr[j]-48)>>i)&1;
            }
        }
        else if (arr[j] > 96 && arr[j] < 103){
                a[j][j*4] = ((arr[j]-87)>>i)&1;
        }
   }


printf("a: %d ", a[0][0]);
printf("%d ", a[0][1]);
printf("%d ", a[0][2]);
printf("%d ", a[0][3]);
printf("%d ", a[0][4]);
printf("%d ", a[0][5]);
printf("%d ", a[0][6]);
printf("%d \n", a[0][7]);

/*    for (i = 0; a[0][i] == 0 ; i++){
    printf("n: %d \n", i);
    k2 = i;
    }
    number = k*4 - k2;//Количество значащих цифр
printf("number: %d k2: %d \n", number, k2);*/

  /*  if (k <= 2){
        cod_2(a, k);
    }
    else if (number <= 7){
        cod_7(a, k);
    }
    else if (number > 7){
        cod_11(a, k, number);
    }*/



    fclose(fc);
    return 0;
}

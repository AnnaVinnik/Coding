#include <stdio.h>
#include "coder.h"


int main()
{
FILE *fc, *fp;
int i, num = 0, j, k = 0, k2 = 0, number = 0;
int arr[5] = {};  //массив с файла
int a[5][22] = {};  //массив с двоичным кодом чисел


    fc = fopen("text.txt", "r");
    fp = fopen("t2.txt", "a");

    for (i = 0; i < 8; i++){
       arr[i] = fgetc (fc);
    }

//Подсчет символов в числе
    for (i = 0; arr[i] != 32; i++){
         k = k + 1;
    }
printf("k:%d\n", k);
for (i = 0; i < k; i++)
    printf("%d\n", arr[i]);


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


   /* for (i = 0; i < k; i++){
        printf("%d", a[0][i]);
    }*/

    //if (k < 3){
       // for (i = 0; i < 8; i++){

//a[0][0] = 3;            //fprintf(fput, "%s", a[0][0]);
for (i = 0; i < k*4; i++){
fprintf(fp, "%d", a[0][i]);
}
char prob = {' '};
fputc(prob, fp);
        //}
    //}
  /*  for (i = 0; a[0][i] == 0 ; i++){
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
    fclose(fp);
    return 0;
}

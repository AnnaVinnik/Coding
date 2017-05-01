#include <stdio.h>

//Перевод в двоичную

int main()
{
FILE *fc;
int i, num = 0, j, k = 0; 
char arr[5] = {};  //массив с файла
char a[5][10] = {};  //массив с двоичным кодом чисел


    fc = fopen("text.txt", "r");

    for (i = 0; i < 5; i++){
       arr[i] = fgetc (fc);
    }
//Подсчет символов в числе
    for (i = 0; arr[i] != 32; i++){
         k = k + 1;
    }
    

printf ("\n k: %d \n", k);
//Заполняем а[0] двоичным кодом числа
    for (j = 0; j < k; j++){
        if (arr[j] > 48 && arr[j] < 58)
            for (i = 0; i < 8; i++){
                a[j][i] = ((arr[j]-48)>>i)&1;
            }
        else if (arr[j] > 96 && arr[j] < 103)
            for (i = 0; i < 8; i++){
                a[j][i] = ((arr[j]-87)>>i)&1;
            }
    }



//Выводим на экран
for (j = 0; j < k; j++){
    for (i = 7; i >= 0; i--){
        printf("%d ", a[j][i]);
    }
    printf("\n");
}


//printf("\n");
    fclose(fc);
    return 0;
}

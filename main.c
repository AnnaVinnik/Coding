#include <stdio.h>

//Перевод в двоичную

int main()
{
FILE *fc;
int i, num = 0, j, k = 0, k2 = 0, number = 0, cod[5][10] = {1, 1, 1};
char arr[5] = {};  //массив с файла
char a[5][5] = {};  //массив с двоичным кодом чисел


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
            for (i = 0; i < 4; i++){
                a[j][3 - i] = ((arr[j]-48)>>i)&1;
            }
        else if (arr[j] > 96 && arr[j] < 103)
            for (i = 0; i < 4; i++){
                a[j][3 - i] = ((arr[j]-87)>>i)&1;
            }
    }

    for (i = 0; a[0][i] == 0 ; i++);
    k2 = i;
    number = k*4 - k2;//Количество значащих цифр
printf("%d \n", number);

    if (number == 16){
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
}
    

//Выводим на экран
for (j = 0; j < k; j++){
    for (i = 0; i < 4; i++){
        printf("%d ", a[j][i]);
    }
    printf("\n");
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


    fclose(fc);
    return 0;
}

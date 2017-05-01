#include <stdio.h>

//Перевод в двоичную

int main()
{
FILE *fc, *f2;
int i, num = 0, j; 
char arr[4] = {};  //массив с файла
char a[5][10] = {};  //массив с двоичным кодом чисел


    fc = fopen("text.txt", "r");
    f2 = fopen("t2.txt", "a");


    for (i = 0; i < 3; i++){
       arr[i] = fgetc (fc);
    }

//Заполняем а[0] двоичным кодом числа
    for (j = 0; j < 3; j++){
        if (arr[j] > 48 && arr[j] < 58)
            for (i = 0; i < 8; i++){
                a[j][i] = ((arr[j]-48)>>i)&1;
            }
        else if (arr[j] > 96 && arr[j] < 103)
            for (i = 0; i < 8; i++){
                a[j][i] = ((arr[j]-87)>>i)&1;
            }
    }

for (j = 0; j < 3; j++){
    for (i = 7; i >= 0; i--)
        printf("%d ", a[j][i]);
    printf("\n");
}


//printf("\n");
    fclose(fc);
    fclose(f2);
    return 0;
}

#include <stdio.h>

//Перевод в двоичную

int main()
{
FILE *fc;
int i, num = 0; 
char arr[4], a[5] = {};
//char arrey[2][10];

    fc = fopen("text.txt", "r");

    for (i = 0; i < 3; i++){
       arr[i] = fgetc (fc);
    }

    //for (i = 0; arr[0][i] != 0; i++);
    //k = i;

   /* for (i = 0; i < 8; i++){
       arr[7-i] = (num >> i)&1;
    }*/


   printf("%s ", arr);

printf("\n");

    fclose(fc);
    return 0;
}

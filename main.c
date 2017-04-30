#include <stdio.h>

//Перевод в двоичную

int main()
{
//FILE *fc;
int i, num = 15, arrey[8];
//char arrey[2][10];

   // fc = fopen("coder.txt", "r");
    /*for (i = 0; i < 1; i++)
        fscanf(fc, "%s", arrey[i]);

    for (i = 0; arrey[0][i] != 0; i++);
    k = i;*/

    for (i = 0; i < 8; i++){
       arr[7-i] = (num >> i)&1;
    }

for (i = 0; i < 8; i++)
    printf("%d ", arr[i]);
printf("\n");

   // fclose(fc);
    return 0;
}

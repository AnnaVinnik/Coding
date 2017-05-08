#include <stdio.h>
#include "coder.h"

#define n 7

int main()
{
    char a[1][n] = {1, 2, 3, 4, 5, 6, 7};
  
//Сдвиг
    printf("Before:       ");
    for (int i = 0; i < n; i++)
        printf("%d",a[0][i]);
    printf("\n");

    ShiftTo(a, 3, 0);

    printf("After ShiftTo:");
    for (int i = 0; i < n; i++)
        printf("%d",a[0][i]);
    printf("\n");

    Insert(a, 0, 321, 3); 

    printf("After Insert: ");
    for (int i = 0; i < n; i++)
        printf("%d",a[0][i]);
    printf("\n");

return 0;
}


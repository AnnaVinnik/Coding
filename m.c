#include <stdio.h>



/*void arr_r(int arr[5][5]){
    arr[2][3] = 5;
}

int main(){
int arr[5][5];

arr[2][3] = 2;
arr_r(arr);
printf("%d \n", arr[2][3]);

    return 0;
}*/

int main()
{
FILE *fp;

fp = fopen("t2.txt", "a");
int k = 5;
    /*int k[5] = {200};
    if (k[5]&11111111 <= 127&11111111){
        printf(":)\n");
    }
    else if (k[5]&1 > 127&1){
        printf("=)\n");
    }*/

fputc(k, fp);

//printf("%d \n", (&127));

fclose(fp);

}


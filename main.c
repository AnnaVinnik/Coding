#include <stdio.h>
#include "coder.h"
#include "command.h"

int main(int argc, char *argv[])
{
FILE *fd, *fc;
int i, qtZero = 0, j, k = 0, k2 = 0, number = 0, significantNumbers = 0, two = 8;
int arr[55] = {};  //массив с файла
int a[5][55] = {};  //массив с двоичным кодом чисел
char prob = {' '};
char coder[6] = "coder", decoder[8] = "decoder";

 
    if (argv[1][0] == coder[0]){
      encode_file(argv[2], argv[3]);
    }

//Decoder
    else if (argv[1][0] == decoder[0] || argv[1][1] == decoder[1]){
      decode_file(argv[2], argv[3]);
    }
    else printf("Usage:\ncoder encode <in-file-name> <out-file-name>\ncoder decode <in-file-name> <out-file-name>\n");
    return 0;
}

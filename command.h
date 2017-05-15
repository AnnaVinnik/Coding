#ifndef COMMAND
#define COMMAND
#include <stdio.h>

int  encode_file(char *in_file_name,  char *out_file_name);
int decode_file(char *in_file_name,  char *out_file_name);
int getNumber(int arr[55], FILE *fc);

#endif

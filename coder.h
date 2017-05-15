#ifndef CODER
#define CODER
#define SIZE_ARRAY 55

void ShiftTo(int a[5][SIZE_ARRAY], int to, int since);
void Insert(int a[5][SIZE_ARRAY], int since, int what, int quantity);
void clean(int a[SIZE_ARRAY]);
void Delete(int a[SIZE_ARRAY], int since, int quantity);

#endif

#include <stdio.h>

int search_x(){
	char n[] = "0xa88c";
	for (int i = 0; i < 10; i++){
		if (n[i] == 'x')
		return i+1;
	}
		return -1;
}

int main()
{
	int i;
	i = search_x();
	printf("%d \n", i);

}

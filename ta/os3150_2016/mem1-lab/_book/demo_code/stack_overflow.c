#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void recursion(int i) {
	/* char a[40 * 1024]; */
        char* a = (char*)malloc(sizeof(char) * (40*1024));
        printf("start %d\n", i);
	/* memset(a, 0, sizeof(a)); */
	printf("OK! %d\n", i);
	recursion(i+1);
}
int main(int argc, char **argv) {
	char a[8000 * 1024]; // remaining is 192 * 1024
	printf("start\n");
	memset(a, 0, sizeof(a));
	printf("OK!\n");
	recursion(0);
	return 0;
}

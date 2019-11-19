#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char str[30]="Happy C language";
	int i=0;
	
	while (str[i]!=0)
	i++;
	
	printf("string length \"%s\"¿« ±Ê¿Ã: %i",str,i);
	
	return 0;
}

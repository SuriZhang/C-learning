#include <stdio.h>
#include "read.h"
int read(void){
	int num = 0;
	printf("Enter a number:");
	scanf("%d", &num);
	return num;
}
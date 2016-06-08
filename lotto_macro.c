#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int arr[SIZE] = {};
	int i = 0;
	for(i = 0; i < SIZE; i++){
		arr[i] = rand() % MAX + 1;
	}
	for(i = 0; i < SIZE; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

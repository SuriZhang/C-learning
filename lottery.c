#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getNumber(int arr[], int size){
	int num = 0, i = 0;
	for (i = 0; i <= size; i++)
	{
		arr[i] = rand() % 36 + 1;
	}
}
int main(){
	srand(time(0));
	int arr[7] = {0};
	getNumber(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
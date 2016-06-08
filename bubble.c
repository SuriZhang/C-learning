#include <stdio.h>

void bubble(int arr[], int len){
	int i = 0; j = 0;
	for(i = 1; i < len; i++){ // compare how many times
		for(j = 0; j < (len - i); j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(void){
	int arr[9] = {20, 8, 18, 3, 15, 5, 25, 10, 22};
	bubble(arr, 9);
}
#include <stdio.h>
// int arr[50];
int fibonacci(int i){
	static int arr[50] = {0};
	if(i <= 1){
		return 1;
	}
	if (arr[i - 2] == 0){
		arr[i - 2] = fibonacci(i - 2);
	}
	if (arr[i - 1] == 0){
		arr[i - 1] = fibonacci(i - 1);
	}
	return arr[i - 1] + arr[i - 2];
}

int main(){
	int i = 0, fib = 0;
	// int arr[50] = {0}; 
	printf("enter index:");
	scanf("%d", &i);
	fib = fibonacci(i);
	printf("the %dth fibonacci number is %d\n", i, fib);
}
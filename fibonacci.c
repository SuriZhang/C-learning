#include <stdio.h>

int fibonacci(int i){
	int num = 0;
	if(i == 0 || i == 1){
		return 1;
	}
	return fibonacci(i - 1) + fibonacci(i - 2);
}
int main(){
	int i = 0, fib = 0;
	printf("enter index:");
	scanf("%d", &i);
	fib = fibonacci(i);
	printf("the %dth fibonacci number is %d\n", i, fib);
}
#include <stdio.h>

int calc(int num){
	if(num == 1){
		return 1;
	}
	return calc(num - 1) + num;
}

int main(){
	int num = 0;
	printf("enter a number:");
	scanf("%d", &num);
	int sum = calc(num);
	printf("sum is %d\n", sum);
}
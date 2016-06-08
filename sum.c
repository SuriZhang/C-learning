#include <stdio.h>
int read(void){
	int num1 = 0, num2 = 0, sum = 0;
	printf("enter a number:");
	scanf("%d", &num1);
	printf("enter a number:");
	scanf("%d", &num2);
	sum = num1 + num2;
	return sum;
}
int main(){
	int sum = read();
	printf("sum is %d\n", sum);
}
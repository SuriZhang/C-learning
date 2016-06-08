#include <stdio.h>
int exchange(int num1, int num2){
	int *p_num1 = &num2, *p_num2 = &num1;
	printf("num1 is %d, num2 is %d\n", *p_num1, *p_num2);
}
int main(){
	int num1 = 0, num2 = 0;
	printf("enter 2 numbers:");
	scanf("%d %d", &num1, &num2);
	exchange(num1, num2);
} 
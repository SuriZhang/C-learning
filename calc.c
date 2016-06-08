#include <stdio.h>

int main(){
	int num1 = 0, num2 = 0, r = 0;
	char opr = 0;
	printf("Enter an equation:");
	scanf("%d %c %d", &num1, &opr, &num2);
	if(opr == '+'){
		r = num1 + num2;
	} else if(opr == '*'){
		r = num1 * num2;
	} else if(opr == '-'){
		r = num1 - num2;
	} else if(opr == '/'){
		r = num1 / num2;
	}
	printf("Result is %d\n", r);
}
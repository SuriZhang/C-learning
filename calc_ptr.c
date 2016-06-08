#include <stdio.h>
int add(int num1, int num2){
	return num1 + num2;
}
int sub(int num1, int num2){
	return num1 - num2;
}
int mul(int num1, int num2){
	return num1 * num2;
}
int divd(int num1, int num2){
	return num1 / num2;
}
int main(){
	int num1 = 0, num2 = 0, r = 0;
	char opr = 0;
	int (*p_func)(int, int) = NULL; // function pointer
	printf("Enter an equation:");
	scanf("%d %c %d", &num1, &opr, &num2);
	if(opr == '+'){
		p_func = add;
	} else if(opr == '*'){
		p_func = mul;
	} else if(opr == '-'){
		p_func = sub;
	} else if(opr == '/'){
		p_func = divd;
	}
	r = p_func;
	printf("Result is %d\n", r);
}
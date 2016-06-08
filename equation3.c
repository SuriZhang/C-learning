#include <stdio.h>
// read in 3 equations from keyboard input, and a number indicating which equation to calculate
// print the result on the screen
typedef struct {
	int num1, num2;
	int (*p_func)(int, int);
} expr;
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
	expr exprs[3]; // structure array
	int i = 0;
	char opr = 0;
	for (i - 0; i < 3; i++){
		printf("Enter an expression: ");
		scanf("%d %c %d", &(exprs[i].num1), &opr, &(exprs[i].num2));
		if(opr == '+'){
			exprs[i].p_func = add;
		} else if(opr == '*'){
			exprs[i].p_func = mul;
		} else if(opr == '-'){
			exprs[i].p_func = sub;
		} else if(opr == '/'){
			exprs[i].p_func = divd;
		}
	}
	printf("Enter index:\n");
	scanf("%d", &i);
	if (i > 0 && i <= 3){
		printf("%d\n", exprs[i-1].p_func(exprs[i-1].num1, exprs[i-1].num2)); 
	}
}
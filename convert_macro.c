#include <stdio.h>
#define CONV(ch) ((ch) >= 'a' && (ch) <= 'z'? (ch) - 'a' + 'A' : (ch) - 'A' + 'a')
int main(){
	char chr = 0;
	printf("Enter a character:");
	scanf("%c", &chr);
	printf("%c\n", CONV(chr));
}
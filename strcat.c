#include <stdio.h>
char *mystarcat(char *p_dest, const chat *p_src){
	char *p_dest1 = p_dest;
	const char *p_src1 = p_src;
	while (*p_dest1 != 0){
		p_dest1++;
	}
	while (*p_src1 != 0){
		*p_dest1 = *p_src1;
		p_src1++;
		p_dest1++;
	}
	*p_dest1 = 0;
	return p_dest;
}

int int main(){
	char str[20] = "abc";
	printf("%s\n", mystarcat(str, "xyz"));
	printf("%s\n", str);
	return 0;
}
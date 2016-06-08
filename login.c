#include <stdio.h>
#include <string.h>

int main(){
	char userid[20] = {};
	char passwd[20] = {};
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("Enter your userid:");
		fgets(userid, 20, stdin);
		if(strlen(userid) == 19 && userid[18] != '\n'){
			scanf("%*[^\n]");
			scanf("%*c");
		}
		printf("Enter you password:");
		fgets(passwd, 20, stdin);
		if(strlen(passwd) == 19 && passwd[18] != '\n'){
			scanf("%*[^\n]");
			scanf("%*c");
		}
		if(strcmp(userid, "admin\n") == 0 && strcmp(passwd, "123456\n") == 0){
			printf("Welcome!\n");
			break;
		} 
		printf("Login Failed.\n");
	}
	
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int serial;
	char name[10];
	char date[20];
} student;
int main(){
	student *p_std = (student *) malloc(sizeof(student));
	if(p_std){
		printf("Enter serial:");
		scanf("%d", &(p_std -> serial));
		scanf("%*[^\n]");
		scanf("%*c");
		printf("Enter name:");
		fgets(p_std -> name, 10, stdin);
		if(strlen(p_std -> name) == 9 && p_std -> name[8] != '\n'){
			scanf("%*[^\n]");
			scanf("%*c");
		}
		printf("Enter date:");
		fgets(p_std -> date, 20, stdin);
		if(strlen(p_std -> date) == 19 && p_std -> date[18] != '\n'){
			scanf("%*[^\n]");
			scanf("%*c");
		}
		printf("Student Info\nSerial:%d\nName:%s\nEntrance Date:%s\n", 
			p_std -> serial, p_std -> name, p_std -> date);
		free(p_std);
		p_std = NULL;
	}
}
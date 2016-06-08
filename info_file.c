#include <stdio.h>
#include <string.h>
typedef struct {
	int id;
	float salary;
	char name[10];
} person;
int main(){
	person prs = {};
	FILE *p_file = fopen("info.bin", "a");
	int choice = 0;
	if(p_file) {
		do{
			printf("Enter id:");
			scanf("%d", &(prs.id));
			printf("Enter salary:");
			scanf("%g", &(prs.salary));
			scanf("%*[^\n]");
			scanf("%*c");
			printf("Enter name:");
			fgets(prs.name, 10, stdin);
			if(strlen(prs.name) == 9 && prs.name[8] != '\n'){
				scanf("%*[^\n]");
				scanf("%*c");
			}
			fwrite(&prs, sizeof(person), 1, p_file);
			printf("More person?");
			scanf("%d", &choice);
		} while (choice);
		fclose(p_file);
		p_file = NULL;
	}
}

#include <stdio.h>
typedef struct {
	int id;
	float salary;
	char name[10];
} person;
int main(){
	person prs = {};
	FILE *p_file = fopen("info.bin", "rb");
	if (p_file){
		while (fread(&prs, sizeof(person), 1, p_file)){
			printf("ID: %d\n", prs.id);
			printf("Name: %s\n", prs.name);
			printf("Salary: %g\n", prs.salary);
		}
		fclose(p_file);
		p_file = NULL;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct person{
		int age;
		float height;
		char name[20];
	} person;

int main(){
	person p1;
	printf("Enter data:");
	scanf("%d", &(p1.age));
	scanf("%g", &(p1.height));
	fgets(p1.name, 20, stdin);
	if (strlen(p1.name) == 19 && p1.name[19] != '\n'){
		scanf("%*[^\n]");
		scanf("%*c");
	}
	printf("Age is %d\n", p1.age);
	printf("Height is %g\n", p1.height);
	printf("Name is %s\n", p1.name);
}
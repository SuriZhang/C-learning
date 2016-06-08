#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int num = 0, i = 0;
	printf("Enter number of tickets:");
	scanf("%d", &num);
	int *p_num = NULL;
	p_num = (int *) malloc (num * sizeof(int));
	if(p_num != NULL){
		for (i = 0; i < num; i++){
			*(p_num + i) = rand() % 36 + 1;
		}
		printf("Lotto number is :\n");
		for (i = 0; i < num; i++){
			printf("%d ", *(p_num + i));
		}
		printf("\n");
		free(p_num);
		p_num = NULL;
	}
}
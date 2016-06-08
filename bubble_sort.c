#include <stdio.h>
// Bubble Sort for both directions

int compare(int *p_num1, int *p_num2){
	if(*p_num1 > *p_num2){
		return 1;
	} else if (*p_num1 < *p_num2){
		return -1;
	} else {
		return 0;
	}
}
int reverse_compare(int *p_num1, int *p_num2){
	return 0 - compare(p_num1, p_num2);
}
void bubble(int *p_num, int size, int (*p_func)(int *, int *)){ //swap two adjacent items to sort
	int i = 0, j = 0;
	for (i = size - 1; i > 0; i--){
		for (j = 0; j < i; j++){
			if (p_func((p_num + j) ,(p_num + j + 1)) == 1) /* former one is bigger*/{
				int tmp = *(p_num + j);
				*(p_num + j) = *(p_num + j + 1);
				*(p_num + j + 1) = tmp;
			}
		}
	}
}
int main(){
	int arr[] = {5, 2, 9, 8, 1, 3, 7}, i = 0, choice = 0;
	printf("Enter 0 if sort in ascending order, 1 if sort in descending order:");
	scanf("%d", &choice);
	if(choice == 0){
		bubble(arr, 7, compare);
	} else if (choice == 1){
		bubble(arr, 7, reverse_compare);
	}
	
	for (i = 0; i < 7; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
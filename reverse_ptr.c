#include <stdio.h>
int main(){
	int arr[] = {1, 2, 3, 4, 5}, i = 0;
	int *p_start = arr /* point to arr[0] */, *p_end = &arr[4] /* point to arr[4] */;
	while (p_start < p_end){
		int tmp = *p_start;
		*p_start = *p_end;
		*p_end = tmp;
		p_start++;
		p_end--;
	}
	for (i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
#include <stdio.h>
int calc(int head, int foot){
	int i = 0, j = 0;
	for (j = 0; j <= foot/4 ; j++)
	{
		for (i = 0; i <= foot/2; i++)
		{
			if(i + j == head){
				return j; 
			}
		}
	}
}
int main(){
	int head = 0, foot = 0;
	printf("enter num head:");
	scanf("%d", &head);
	printf("enter num foot:");
	scanf("%d", &foot);
	int j =calc(head, foot);
	printf("there are %d rabbits, %d chickens.\n", j, head - j);

}
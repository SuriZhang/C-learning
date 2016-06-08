#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int card[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	int num_card = 0, num = 0, i = 0, suit = 0;
	printf("enter number of cards: ");
	scanf("%d", &num_card);
	int result[num_card];
	srand(time(0));
	
	suit = rand() % 4;
	printf("Card suit is ");
	if (suit == 0){
		printf("Heart.\n");
	} 
	if (suit == 1){
		printf("Diamond.\n");
	}
	if (suit == 2){
		printf("Club.\n");
	}
	if (suit == 3){
		printf("Spade.\n");
	}
	
	while (i < num_card){
		num = rand() % 13;
		if (card[num] == -1){
			continue;
		} else {
			result[i] = card[num];
			card[num] = -1;
			i++;
		}
	}	
	
	for (i = 0; i < num_card; i++){
		if (result[i] == 1){
			printf("%c ", 'A');
		} else if (result[i] == 11){
			printf("%c ", 'J');
		} else if (result[i] == 12){
			printf("%c ", 'Q');
		} else if (result[i] == 13){
			printf("%c ", 'K');
		} else {
		printf("%d ", result[i]);
		}
	}
	printf("\n");
}









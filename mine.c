#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int map[10][10] = {0}, x = 0, y = 0, count = 0, num = 0;
	int delta[][2]= {-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
	srand(time(0));
	do {
		x = rand() % 10;
		y = rand() % 10;
		if (map[x][y] != -1){
			map[x][y] = -1;
			count++;
			//printf("x is %d, y is %d \n", x, y);
		}
	} while (count < 10);
	for (x = 0; x < 10; x++){
		for (y = 0; y < 10; y++){
			if (map[x][y] == -1){
				for (num = 0; num <= 7; num++){
					int new_x = x + delta[num][0];
					int new_y = y + delta[num][1];
					if (new_x < 0 || new_x > 9){
						continue;
					}
					if (new_y < 0 || new_y > 9){
						continue;
					} else{
						map[new_x][new_y]++ ;
					}
				}
			}
			
		}
	}
	for (x = 0; x< 10; x++){
		for (y = 0; y < 10; y++){
			if (map[x][y] == -1){
				printf("%c ", 'X');
			} if (map[x][y] == 0){
				printf("%c ", 'O');
			} else {
				printf("%d ", map[x][y]);
			}
		}
		printf("\n");
	}
}

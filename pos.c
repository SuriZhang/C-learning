#include <stdio.h>
typedef struct {
		int row;
		int col;
	} pt;
	typedef struct {
		pt pt1, pt2; 
	} rect;

int main(){
	/*rect r1 = {};
	printf("Enter a rectangle's position:");
	scanf("%d %d %d %d", &(r1.pt1.row), &(r1.pt1.col), &(r1.pt2.row), &(r1.pt2.col));
	int area = 0;
	area = (r1.pt1.row - r1.pt2.row) * r1.pt1.col - r1.pt2.col;
	area = area >= 0 ? area : 0 - area;
	printf("Area is %d\n", area); */
	pt p1 = {}, p2 = {}, mid = {};
	printf("Enter p1: ");
	scanf("%d %d", &(p1.row), &(p1.col));
	printf("Enter p2: ");
	scanf("%d %d", &(p2.row), &(p2.col));
	mid.row = (p1.row + p2.row) / 2;
	mid.col = (p1.col + p2.col) / 2;
	printf("%d,%d\n", mid.row, mid.col);
}
#include <stdio.h>
typedef struct {
		int row;
		int col;
	} pt;
	typedef struct {
		pt pt1, pt2; 
	} rect;
int area(const rect *p_rect){
	int area = (p_rect -> pt1.row - p_rect -> pt2.row) * (p_rect -> pt1.col - p_rect -> pt2.col);
	return area >= 0 ? area : 0 - area;
}

int main(){
	rect r1 = {};
	printf("Enter a rectangle's position: ");
	scanf("%d %d %d %d", &(r1.pt1.row), &(r1.pt1.col), &(r1.pt2.row), &(r1.pt2.col));	
	printf("Area is %d\n", area(&r1)); 
	
}
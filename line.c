#include <stdio.h>
#include <math.h>

typedef struct {
	int x, y;
} point;
typedef struct {
	point p1, p2;
} line;

int calcLength(const line *p_line){
	int length = pow(pow((p_line -> p1.x - p_line -> p2.x), 2) + pow((p_line -> p1.y - p_line -> p2.y), 2), 0.5);
	return length;
}
const line *longer(const line *p_line1, const *p_line2){
	if(calcLength(p_line1) > calcLength(P_line2)){
		return p_line1;
	} else {
		return p_line2;
	}
}
int main(){
	line l1 = {}, l2 = {}, *p_line = NULL;
	int len1 = 0, len2 = 0;
	printf("Enter a line: ");
	scanf("%d %d %d %d", &(l1.p1.x), &(l1.p1.y), &(l1.p2.x), &(l1.p2.y));
	printf("Enter a line: ");
	scanf("%d %d %d %d", &(l2.p1.x), &(l2.p1.y), &(l2.p2.x), &(l2.p2.y));
	p_line = longer(&l1, &l2);
	printf("longer one is ((%d, %d), (%d, %d))\n", p_line -> p1.x, p_line -> p1.y, p_line -> p2.x, p_line -> p2.y);
}
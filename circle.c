#include <stdio.h>
#include <math.h>
typedef struct {
	int x;
	int y;
} point;
typedef struct {
	point center;
	int radius;
} circle;

int main(){
	point pt = {};
	circle c = {};
	int dis = 0;
	printf("Enter a point: ");
	scanf("%d %d", &(pt.x), &(pt.y));
	printf("Enter a circle: ");
	scanf("%d %d %d", &(c.center.x), &(c.center.y), &(c.radius));
	dis = pow(pow(c.center.x - pt.x, 2) + pow (c.center.y - pt.y, 2), 0.5);
	if (dis < c.radius) {
		printf("This point is in the circle.\n");
		break;
	} 
	if (dis == c.radius) {
		printf("This point is on the tangent line of the circle.\n");
	} 
	if (dis > c.radius) {
		printf("This point is out of the circle.\n");
	}
}
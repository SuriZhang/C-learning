#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x,y;
} point;

/*point *midp(const point *p_p1, const point *p_p2){
	point *p_pt = (point *) malloc(sizeof(point));
	if(p_pt){
		p_pt -> x = (p_p1 -> x + p_p2 -> x) / 2;
		p_pt -> y = (p_p1 -> y + p_p2 -> y) / 2;
	}
}*/
void midp(const point *p_p1, const point *p_p2, point **pp_pt){
	*pp_pt = (point *) malloc(sizeof(point));
	if(pp_pt){
		(*pp_pt) -> x = (p_p1 -> x + p_p2 -> x) / 2;
		(*pp_pt) -> y = (p_p1 -> y + p_p2 -> y) / 2;
	}
}
int main(){
	point p1 ={}, p2 = {}, *p_pt = NULL;
	printf("Enter a point:");
	scanf("%d %d", &(p1.x), &(p1.y));
	printf("Enter a point:");
	scanf("%d %d", &(p2.x), &(p2.y));
	//point *p_pt = midp(&p1, &p2);
	midp(&p1, &p2, &p_pt);
	if(p_pt){
		printf("Mid point is (%d,%d)\n", p_pt -> x, p_pt ->y);
		free(p_pt);
		p_pt = NULL;
	}

}
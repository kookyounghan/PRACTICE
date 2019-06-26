#include<stdio.h>
struct point
{
	int x;
	int y;
};

int main(void)
{
	int n =10;
	
	struct point p1={10,20};
	struct point *ps = &p1;

	printf("%d \n",p1.x);
	printf("%d \n",ps->x);

	return 0;
}

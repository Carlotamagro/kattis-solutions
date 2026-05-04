#include <stdio.h>

int main(){
	float n;
	float h;
	float x;
	float m;
	float y;
	float result;

	scanf("%f %f %f %f %f", &n,&h,&x,&m,&y);

	result = h*y*n/(x*m);

	printf("%f",result);

}

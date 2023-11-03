#include <stdio.h>

float first (int x, int y){
	int xt= x *2;
	float cosx = cos(x);
	float siny = sin(y);
	float sin2x = sin(xt);
	float res=  pow(cosx, 4) + pow(siny, 2) + 0.25 * pow(sin2x, 2) -1; //pow(cos(x), 4) + pow(sin(y), 2) + (0,25*(pow(sin(x*2),2)))-1
	return res;
}

float second (int x, int y){
	float res = sin(x +y) * sin(x-y);
	return res;	
}
int main(void) {
	int choice,x,y=0;
	float z;
	printf("First equation: z = (cosx)^4 + (siny)^2 + (1/4*((sin2x)^2)) - 1\n");
	printf("Second equation: z = sin(x+y)*sin(x-y)\n");
	printf("To choose first print - (1), to choose second print - (2)\n");
	scanf ("%d", &choice);
	
	printf("Enter 'x': ");
	scanf ("%d", &x);
	printf("Enter 'y': ");
	scanf ("%d", &y);

	if (choice == 1){
		z = first (x,y);
		printf("(cos%d)^4 + (sin%d)^2 + (1/4*((sin2*%d)^2)) - 1 = %f", x, y, x, z);
	} else if ( choice == 2){
		z = second (x,y);
		printf("sin(%d+%d)*sin(%d-%d) = %f",x,y,x,y, z);
	} else {		
		printf("Error");
	}

	return 0;
}
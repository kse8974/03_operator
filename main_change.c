#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	int z;
	int w;
	int result;
	
	printf("input the year :  ");
	scanf("%i", &x);
	
	y = x % 4;
	z = x % 100;
	w = x % 400;
	
	
	result = (y==0 && z!=0) || (w==0);
	
	printf("Is the year %i the leap year? : %d \n",x, result);

	return 0;
}


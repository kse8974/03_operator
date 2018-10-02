#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	int z;
	
	printf("input 3 integers: ");
	scanf("%d %d %d", &x, &y, &z);	
	
	
	printf("average of %i %i %i is %f\n", x,y,z,(double)(x+y+z)/3);
	

	return 0;
}


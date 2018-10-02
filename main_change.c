#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	int z;
	int w;
	
	printf("input the second :  ");
	scanf("%i", &x);
	
	y = x /3600;
	z = (x - 3600*y)/60;
	w = x - (3600*y) - (60*z);
	
	
	printf("The time for %i second is %i : %i : %i\n", x, y, z, w);

	return 0;
}


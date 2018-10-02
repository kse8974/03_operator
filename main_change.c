#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	int z;
	
	printf("input the second :  ");
	scanf("%i", &x);
	
	y = x / 60;
	z = x % 60;
	
	printf("the time is %i :%i \n", y,z);

	return 0;
}


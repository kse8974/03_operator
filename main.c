#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	int sum, sub;
	
	
	printf("input two integers :  ");
	scanf("%i %i", &x, &y);
	
	sum = x + y;
	sub = x - y;
	
	printf("+ result is %i\n", sum);
	printf("- result is %i\n", sub);
	printf("* result is %i\n", x*y);
	printf("/ result is %i\n", x/y);
	printf("%% result is %i\n", x%y);
	
	
	
	return 0;
}

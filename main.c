#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i;
	
	printf("input a number :");
	scanf("%c",&c);
	
	i= c -'0';
	printf("the next number of %c (%d) is %c (%d)",c,c,c+1,c+1);
	
	return 0;
}
	
	
/*
 * binary.c
 * "New Primer Plus C"
 * Page 299
 *  Created on: Apr 10, 2018
 *      Author: rduvalwa2
 */

#include <stdio.h>
void to_binary(int n);

int main(void){
	int number;
	printf("Input number to convert to binary or Q to quit\n");
	while(scanf("%d", &number) == 1 ){
		printf("Number now is %d\n", number);
		to_binary(number);
		putchar('\n');
		printf("Input number to convert to binary or Q to quit\n");

	}
	printf("Exit Binary Program");
	return 0;
}

void to_binary(int n){
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n/2);
	putchar('0' + r);
	return;
}

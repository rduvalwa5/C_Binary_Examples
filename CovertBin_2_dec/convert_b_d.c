/*
 * convert_b_d.c
 *
 *  Created on: Apr 12, 2018
 *      Author: rduvalwa2
 *https://www.sanfoundry.com/c-program-binary-number-into-decimal/
 * C program to convert the given binary number into decimal


#include <stdio.h>

void main()
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;

    printf("Enter a binary number(1s and 0s) or 0 to quit \n");
    scanf("%d", &num); // maximum five digits
    printf("Input is %d \n", num);
    while(num > 0){
	    binary_val = num;
    	while (num > 0)
    	{
    		rem = num % 10;
    		decimal_val = decimal_val + rem * base;
    		num = num / 10 ;
    		base = base * 2;
    	}
    	printf("The Binary number is = %d \n", binary_val);
    	printf("Its decimal equivalent is = %d \n", decimal_val);
    	scanf("%d", &num); // maximum five digits
    	printf("Really Input is %d \n", num);
	   	decimal_val = 0;
    }
    printf("Exiting Program");
}

*/
#include <stdio.h>

void main()
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;

    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
}


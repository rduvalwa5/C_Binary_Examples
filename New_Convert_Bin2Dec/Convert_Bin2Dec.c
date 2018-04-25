/*
 *  Created on: Apr 16, 2018
 *      Author: rduvalwa2
 * C program to convert the given binary number into decimal
*/

#include <stdio.h>

void main()
{
    int newNum, binary_val, decimal_val = 0, base = 1, rem;

	char * num;
    printf("Enter a binary number(1s and 0s) \n");

    scanf("%s", &num);
    printf("num is %s\n",&num);
    newNum = atoi(&num);
    printf("newNum is %d \n",newNum);
    binary_val = newNum;
    while (newNum > 0)
    {
        rem = newNum % 10;
        decimal_val = decimal_val + rem * base;
        newNum = newNum / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
}



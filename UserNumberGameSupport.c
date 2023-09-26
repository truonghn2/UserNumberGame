/* Heather Truong
 * 9/26/23
 */

// Include Files
#include <stdio.h>
// Project Includes
#include "lab3header.h"
// Function Implementations

int reverse_number(int num)
{
	int reversed = 0; 
	while(num > 0) {
		reversed = reversed * 10 + num % 10;
		num = num / 10;
	}
	return reversed;
}

int even_odd(int num)
{
	if(num % 2)
		return 1;
	else 
		return 0;       
}


int is_prime(int num)
{
	int i , flag = 0; 

	for(i = 2; (i <= num / 2) && (flag == 0); i++) { 
		if(num % i == 0) 
			flag = 1;
	} 
	return flag;
}

int sumall(int a[], int size)
{
	int i, sum = 0; 
	for (i = 0 ; i < size ; i++)
		sum += a[i];
	return sum; 	
}

int power (int base , int exponent)
{
	if(exponent ==0)
		return 1;
	else if(exponent == 1)
		return base; 
	else
		return base * power(base , exponent - 1);
}


/* Heather Truong
 * 9/26/23
 */

#include <stdio.h>
#include "lab3header.h"

int main(void) 
{ 
	char ch = 'N'; /* variable to accept the user's choice, N represents the condition not to exit from the program */ 
	int num; /* variable to accept a number */
    int a[] = {0, 1, 2, 3, 4};

	while( (ch != 'Y') && (ch != 'y') ) 
	{ 

		printf("Enter R to reverse the digits of the number \n"); 
		printf("Enter E to determine if the number is even or odd \n"); 
		printf("Enter P to determine if the number is prime \n");
	    printf("Enter S to calculate the sum of elements in the array\n");
		printf("Enter B to calculate the power of a number\n");	
		printf("Enter Y or y to exit the program\n"); 
		printf("Enter your choice: "); 

		scanf("%c", &ch); 
		while(getchar() != '\n'); /*clears the input buffer, alternatively you can use fflush*(stdin)*/

		switch(ch) 
		{ 
			case 'R': case 'r': 
				printf("Enter the number to be reversed:\n"); 
				scanf("%d", &num);
				while(getchar() != '\n'); 
		            
				//call reverseNumber function
		  	    int reversedNum = reverse_number(num);

			    //print returned value
				printf("Reversed number: %d\n", reversedNum);
				
				break; 

			case 'E': case 'e': 
				printf("Enter the number to check if it is even or odd:\n"); 
				scanf("%d", &num); 
				while(getchar() != '\n');

			    //call the even_odd function
				int result = even_odd(num);

				if (result == -1) {
				printf("Your number is odd\n");
				}

				else {
				printf("Your number is even\n");
				}

				break; 

			case 'P': case 'p': 
				printf("Enter the number to check if it is prime or not:\n"); 
				scanf("%d", &num); 
				while(getchar() != '\n'); 
				
				//call is_prime function
				int primeResult = is_prime(num);
				if (primeResult == 1) {
					printf("Your number is prime\n");
				}
				else {
					printf("Your number is not prime\n");				
				}	
				break; 
	
			case 'S': case 's':
			{
				//call the sumall function
				int sumResult = sumall(a, 3);

				//print the result
				printf("Sum of elements in the array: %d\n", sumResult);
				break;
			}
			case 'B': case 'b':
			{
				int base, exponent;
				printf("Enter the base: ");
				scanf("%d", &base);
				printf("Enter the exponent: ");
				scanf("%d", &exponent);

				//call the power function
				int powerResult = power(base, exponent);

				//print the result
				printf("%d to the power of %d is: %d\n", base, exponent, powerResult);
				break;
			}
			case 'Y': case 'y': 
				printf("Exiting the program.\n\n"); 
				break;

			default: 
				printf("You have entered a wrong choice. Try again\n"); 
				break; 
		} 
	} 
	return 0; 
} 

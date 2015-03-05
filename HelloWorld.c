#include <stdio.h>


/*---C program to print "Hello World!"
     by Jonathan Preston Cranford
     for fun
     November 3, 2014
---*/


/*---Highlights of the program
	Just prints "Hello World!"
---*/


/*---Summary of key program operations and functions used
	1)  In function main(), prints "Hello World!" and asks for user to press enter to end the program
---*/
   


/*---main():	Start of main function---*/
int main()
{
	/*---Define variables in function main---*/
	char usrinp[100];						//Generic use string to get input from user from command line
	
	printf("\nHello World!");
	
	printf("\n\n\nPress enter to exit program:  ");
	gets( usrinp );
	printf("\n\n\n");
   
   return 0;
}

#include <stdlib.h>                                                                                              

#include <time.h>                                                                                                

#include <stdio.h>                                                                                               

                                                                                                                 

/**                                                                                                              

* main - print random number of variables                                                     

*                                                                                                                                                                                                                                          

* Return: Always(successful).                                                                                                     

*/                                                                                                               

int main(void)                                                                                                   

{                                                                                                                

	int n;

	char last[]= "Last digit of";                                                                                              

                                                                                                                 

	srand(time(O));                                                                                                  

	n = rand() - RAND_MAX / 2; 

        printf("%s %d is %d and is",last,n,n%1O);                                                                                                                                                                   

	if (n%10 > 5 )

	{                                                                                                                                                                                                                     

        	printf("greater than 5\n");                                                                                                                                                                                          

	}

	else if(n%1O == O)

	{                                                                                                                                                                                                             

        	printf("O\n");                                                                                                                                                                                               

	}

	else  

	{                                                                                                                                                                                                              

        	printf("less than 6 and not O\n");                                                                                                                                                                                      

	}

	return (0);


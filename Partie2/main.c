#include<stdio.h>
#include <string.h>

#include"lib/io.h"

int main()
{
	
	//Welcome message
	printf("Welcome to the c calculator !\n");
	printf("To use it, write below the operation\n");
	printf("You can clear the terminal by writing flush\n");
	printf("and quit by writing quit\n");

	char input[30]; //The operation's lenght can't be higher than 30 char
	do
	{
		printf(">>");
		scanf("%30s", input);
		
		if (strcmp(input, "quit") == 0)
		{
		} else if(strcmp(input, "flush") == 0){
			flush();
		} else {
			calculate(input);
		}
	
	} while (strcmp(input, "quit") != 0);
	printf("Bye !\n");

}



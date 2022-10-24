#include"io.h"
#include<stdarg.h>
#include"stdio.h"

extern void print(int,char*, int);


void printChar(char c)
{
	print(1, &c, 1); 
}

//TODO 2
void printString(char* str)
{
	for(char c = *str; c != '\0'; c = *++str )
	{
		printChar(c);
	}

}


//TODO 3
void printDigit(int i)
{
	if(i >= 0 && i <= 9)
	{
		printChar(i+48);
	}
	
}


//TODO 4
void printInteger(int i) //A ameliorer si possible
{
	int n = i; 


	//Calculate the length of the Integer
	int lengthOfInteger = 0;
	while(n > 0){
		n = n/10;
		lengthOfInteger++;
	}
	n = i;

	//Create an array that has the length as size
	int numbers[lengthOfInteger]; 
	
	//Fill the array with the numbers
	//Starts filling from the end of the array, to put the number at the right order
	for (int j = 0; j < lengthOfInteger; j++)
	{
		numbers[(lengthOfInteger-1) - j] = n%10;
		n = n/10;
	}

	//Loop the array to print the numbers
	for (int j = 0; j < lengthOfInteger ; j++)
	{
		printDigit(numbers[j]);
	}
	
}

//TODO 5
void newPrintf(char* str, ...)
{
	va_list args;
	va_start(args, str);
	for(char c = *str; c != '\0'; c = *++str)
	{
		if(c == '%')
		{
			char d = c;
			d = *++str;
			switch (d)
			{
			case 'd':		
				int char_value = va_arg(args, int); 
				printInteger(char_value);	
				c = *++str;
				break;

			case 'c':
				char int_value = va_arg(args,int);
				printChar(int_value);
				c = *++str;
				break;

			case 's':
				char * s_value = va_arg(args, char*);
				printString(s_value);
				c = *++str;
				break;

			default:
				break;
			}
			/**
			if(d == 'd')
			{
				int value = va_arg(args, int); 
				printInteger(value);	
				c = *++str;
			} else if(d = 'c') {
				char value = va_arg(args,int);
				printChar(value);
				c = *++str;
			} else if(d = 's') {
				
				char * value = va_arg(args, char*);
				
				printString(value);
				c = *++str;
			}*/
		} else {	
			printChar(c);
		}
	}
	va_end(args);
}


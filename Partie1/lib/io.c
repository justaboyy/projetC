#include"io.h"
#include<stdarg.h>

extern void print(int,char*, int);


void printChar(char c)
{
	print(1, &c, 1);
}


void printString(char* str)
{
	for(char c = *str; c != '\0'; c = *++str )
	{
		printChar(c);
	}

}


void printDigit(int i)
{
	if(i >= 0 && i <= 9)
	{
		printChar(i+48);
	}
	
}


void printInteger(int i)
{
	//CODE TODO4
}


void newPrintf(char* str, ...)
{
	//CODE TODO5
	
}
#ifndef IO_H
#define IO_H


extern void print(int, char*, int);

//TODO1
void printChar(char c);

//TODO2
void printString(char* str);

//TODO3
void printDigit(int i);

//TODO4
void printInteger(int i);

//TODO5
void newPrintf(char* str, ...);

//TODO6
#define printG(var) _Generic((var), int : printInteger, char : printChar, char* : printString, default: printString("Error : type not available"))(var)

#endif
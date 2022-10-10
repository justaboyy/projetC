#include"lib/io.h"


/*---------------------------------------------------------*/
/*Définition d'une macro pour afficher un retour a la ligne*/
char RetourLigne = 10;
#define EOL print(1,&RetourLigne,1); 
/*---------------------------------------------------------*/

int main()
{
	#ifdef DEFAULT
	char c = 'C';
	print(1,&c,1);
	EOL;
	#endif
	
		
	#ifdef TODO1
	printChar('C');
	EOL;
	#endif	
	
	
	#ifdef TODO2
	printString("Hello Word!\n");
	#endif	
	
	
	#ifdef TODO3
	for(int i = -7; i < 15; i++)
	{
		printDigit(i);
	}
	EOL;
	#endif	
	
	
	#ifdef TODO4
	printInteger(123456);
	EOL;
	#endif	
	
	
	#ifdef TODO5
	newPrintf("L'entier vaut : %d, le chractère est : %c, et le string est : %s\n",111,'A',"hello");
	#endif	
	
	#ifdef TODO6
	printG(123);
	EOL;
	printG((char)'C');
	EOL;
	printG("Hello\n");
	#endif	
	
	return 0;
}

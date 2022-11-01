#include"io.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void flush()
{
    //TODO
    printf("flush\n");
}

void calculate()
{
    //TODO
    printf("calculate\n");
}




int verifGauche(char* membreG)//pas fonctionnelle
{
	char *end;
	double num = strtod(membreG &end);		
	if( end!=NULL && *end=='\0' )
	{
		printf("%-9s : %g\n",membreG,num);
	}
	else
	{
		printf("%-9s : Erreur\n",membreG);
	}
	return 0;
		
}

int verifDroite(char* membreD)// pas fonctionnelle
{
	char *end;
	double num = strtod(membreG &end);		
	if( end!=NULL && *end=='\0' )
	{
		printf("%-9s : %g\n",membreG,num);
	}
	else
	{
		printf("%-9s : Erreur\n",membreG);
	}
	return 0;
		
}

int isOperation(char* operation)
{
    int grlight = 0;
    int indiceOpe;    
    char operateurs[5] = {'+','-','*','/'};

    //détecte le premier opérateur
    while(grlight == 0 && pasfini)
    {
	int i;
	//verifie pour +, -, *, /, %
        // si oui, grlight = 1;
        //placeDelOperateur = valeur
	for(i=0; i<5; i++)
	{
		//compare les valeurs du tableau avec les caratères de 'operation' string passée
		//en param
		if(strcmp (operateurs[i], operation) == 0)
		{
			printf("\n l'opérateur est ", operateurs[i]);						
			grlight = 1;	
			indiceOpe = operateur[i];		
		}
		else{
			printf("\n il n'y a pas d'operateur dans votre calcul");
		}
	}
    }    
    //si grlight = 1
    //sous-fonction pour vérifier à gauche
    //meme fonction pour verifier à droite
    if(grlight == 1)
    {
    	//fonction qui découpe la saisi user pour avoir le 'avant operateur' et 'apres operateur'
    	verifGauche('avant operateur');
    	verifDroite('apres operateur');
}







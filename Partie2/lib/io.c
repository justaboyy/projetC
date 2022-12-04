#include "io.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flush()
{
    //TODO
    printf("flush\n");
}

void calculate(char* operation)
{
    int valid = isOperation(operation);
    if(isOperation >= 0){
        printf("calculate\n");
    } else {
        printf("error");
    }
}




int verif(char* membre) //TODO return 0 = non valide ; return 1 = valide ; sortie texte dans isOperation
{                           //Valide = (1 seul char de type '.' ou ',' && un seul char de type '-' ou '+' && )
    char *end;
    double num = strtod(membre, &end);        
    if( end!=NULL && *end=='\0' )
    {
        printf("%s : %g\n",membre,num);
        return 1;
    }
    else
    {
        printf("%s : Error member\n",membre);
        return 0;
    }  
}



char* simplifyAndFill(char* operation, int start, int end)
{
    int countRealSizeMember = 0;
    int firstIsDot = 0; 
    int noMoreSpaces = 0;

    //Count the size of the returned array
    for (int i = 0; i < end-start; i++)
    {
        if(operation[i] == ' ' ||operation[i] == '+' ){
            
        } else {
            if((operation[i] == '.' || operation[i] == ',') && noMoreSpaces == 0 ) //Test and resolve the case for float that start with . or ,
            {
                firstIsDot = 1;
                countRealSizeMember++;
            }
            if(noMoreSpaces == 0){
                noMoreSpaces = 1;
            }
            countRealSizeMember++;
        }
    }

    //Create and fill the returned array
    char ret[countRealSizeMember];
    int j = 0;
    for (int i = 0; i < countRealSizeMember; i++)
    {
        if(operation[i] == ' ' || operation[i] == '+'){
        } else {
            if(firstIsDot == 1){ //Case for float that start with . or ,
                ret[0] = '0';
                ret[1] = '.';
                i++;
                firstIsDot = 0;
            } else {
                ret[i] = operation[i];
            }
        }
    }
    return &ret;
}

//returns the index of the operator if valid, -1 otherwise
int isOperation(char* operation)
{
    int verifOperator = 0;
    int indexOpe = 0; 
    char operator;
    char operators[5] = {'+','-','*','/'};

    //détecte le premier opérateur
    while(verifOperator == 0 && indexOpe < sizeOf(operation))
    {
    	int i;
    	//verifie pour +, -, *, /, %
        // si oui, verifoperator = 1;
        //placeDeloperator = valeur
    	for(i=0; i<5; i++)  //TODO ajouter une variable compteur de -/+, erreur si supérieur à 3, pour pouvoir écrire -4 + -5 ou encore +5 + 9 par expl  
    	{
        	//compare les valeurs du tableau avec les caratères de 'operation' string passée
        	//en param
            if(operators[i] == operation[indexOpe]) 
            {
            	printf("\n l'opérateur est ", operators[i]);                        
            	verifOperator = 1;    
            	operator = operators[i];
            }
        }
        if (verifOperator == 0)
        {
            indexOpe += 1;
        }
    }

	//si verifoperator = 1
    //sous-fonction pour vérifier à gauche
    //meme fonction pour verifier à droite
    if(verifOperator == 1)
    {        
        

        //Call of the verification of members
        int validMember = verif(memberL);
        if(validMember == 1){
            validMember = verif(memberR);
        }
        if(validMember == 1){
            return indexOpe;
        } else {
            printf("Error : Operands not valid");
            return -1;
        }

	} else {
		printf("Error : Operator not found in expression");
        return -1;
	}
}
#include "io.h"
#include <stdio.h>
#include <stdlib.h>

//Flush method, clear the console
void flush()
{
	system("clear");
}


//calculate and show the result to the operation if it's valid. Otherwise, shows the error message
void calculate(char operation[])

{
   	int verifOperator = 0; //boolean to verify if there is a valid operator in the operation
   	int indexOpe = 1;  //index of the operator. Starts at 1 so you can put a + or - symbol before your first operand
   	char operator; //the operator
    char operators[5] = {'+','-','*','/','%'}; //list of available operator     	    	

    //loop to search for the operator and it's value
	while(verifOperator == 0 && indexOpe < sizeof(operation))
    {
            //for each entry in the input, verify for the 5 operators
    		for(int i=0; i<5; i++)  
    		{
            		if(operators[i] == operation[indexOpe]) 
            		{	                     
            			verifOperator = 1;    
            			operator = operators[i];
            		}
        	}	
        	if (verifOperator == 0)
	        {	
            		indexOpe += 1;
	        }	
					
    }
 
    //error if there is no operator
    if(verifOperator == 0) {
    	printf("Error: No operator in the operation\n");
    } else {
   		
    	char tabL[indexOpe]; //left operand as a string
		char tabR[strlen(operation)-indexOpe]; //right operand as a string

        //fill the left operator		
		for(int i=0;i<indexOpe;i++)
		{
			tabL[i]=operation[i];
		}	

        //fill the right operand
        for(int i=0;i< strlen(operation)-indexOpe;i++)
		{
			tabR[i]=operation[i+indexOpe+1];
		}
					
		
		double result; //result of the operation

		if(operator == '%'){
			int left_member = atoi(tabL); //from string to int for left
			int right_member = atoi(tabR); //same for right
			result = left_member % right_member; //calculate
		} else {
			

			double left_member;
			double right_member;

            //makes it possible to use the pi and e values in the calculator
			if(tabL[0] == 'p' && tabL[1]=='i'){
				left_member = 3.141592;
			} else if (tabL[0] == '-' && tabL[1] == 'p' && tabL[2]=='i'){
				left_member = -3.141592;
			} else if(tabL[0]=='e'){
				left_member = 2.718281;
			} else if(tabL[0] == '-' && tabL[1]=='e'){
				left_member = -2.718281;
			} else {
				left_member = atof(tabL); //from string to double for left
			}
			
			if(tabR[0] == 'p' && tabR[1]=='i'){
				right_member = 3.141592;
			} else if (tabR[0] == '-' && tabR[1] == 'p' && tabR[2]=='i'){
				right_member = -3.141592;
			} else if(tabR[0]=='e'){
				right_member = 2.718281;
			} else if(tabR[0] == '-' && tabL[1]=='e'){
				right_member = -2.718281;
			} else {
				right_member = atof(tabR); //from string to double for right
			}
			
			switch(operator) //calculate depending of the operator
			{
				case '+':	
					result = left_member + right_member;
					break;
					
				case '-':
					result = left_member - right_member;
					break;
					
				case '*':
					result = left_member * right_member;
					break;
					
				case '/':
					if(right_member == 0){
						printf("Error : cannot divide by 0\n");
						return;
					}else{
						result = left_member / right_member;
					}
					break;
			}
		}
		
        
		int i = result; //round value of the result
				
		//if round value = value, then the result is a int
		if(i == result){
			printf("%i\n",i);
		} else { //otherwise, it is a double
			printf("%f\n",result);
		}
	
	}
    

}






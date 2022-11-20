/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    19/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    program to to make a Simple Calculate to Add,
                             Subtract,Multiply or Divide Using switch..case  */
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#include <stdio.h>
#include <stdlib.h>
void void_SimpleCalculate();
int main()
{
   // while(1)
	{
	void_SimpleCalculate();}
	return 0;
}
/******************************************************************************
* \Syntax          : void void_SimpleCalculate(void)
* \Description     : program to to make a Simple Calculate to Add,
                     Subtract,Multiply or Divide 
* \Parameters (in) : void
* \Parameters (out): void
*******************************************************************************/
void void_SimpleCalculate(void)
{
	char operator=0;//declaration variable
	float fOperand1=0,fOperand2=0,result=0;
	printf("Enter operator either(+,-,*,/)\n ");//order to user to input operator
	scanf("%c",&operator);//push to memory the  operator Which was written by the user
	printf("Enter Two Operand\n ");//order to user to input two Operand
	scanf("%f",&fOperand1);//push to memory the  Operand one Which was written by the user
	scanf("%f",&fOperand2);//push to memory the  Operand two Which was written by the user	
	switch(operator)
	{
		case'+'://if user chose Add
		result=fOperand1+fOperand2;
		printf("%f %c %f =%f",fOperand1,operator,fOperand2,result);
		break;
		case'-':
		result=fOperand1-fOperand2;//if user chose Sub
		printf("%f %c %f =%f",fOperand1,operator,fOperand2,result);
		break;
		case'*':
		result=fOperand1*fOperand2;////if user chose mult
		printf("%f %c %f =%f",fOperand1,operator,fOperand2,result);
		break;		
		case'/':
		result=fOperand1/fOperand2;//if user chose Divide
		printf("%d %c %d =%d",fOperand1,operator,fOperand2,result);
		break;
        default:
        printf("Error!!!Wrong access");		
	}
	printf("\n");
}

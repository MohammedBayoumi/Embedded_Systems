/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    18/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    C program to chick wether a Number is Positive or Negative */
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/

void void_ChickPositiveNegative(void);

#include <stdio.h>
int main()
{
void_ChickPositiveNegative();
}
/******************************************************************************
* \Syntax          : void void_ChickPositiveNegative(void)
* \Description     :  C program to chick wether a Number is Positive or Negative
* \Parameters (in) : void
* \Parameters (out): void
*******************************************************************************/
void void_ChickPositiveNegative(void)
{
	float fNumber;
	printf("Enter a Number :");
	scanf("%f",&fNumber);
	if(fNumber>0)//chick if Number1 Positive
		printf(" %f is Positive",fNumber);
	else if(fNumber==0)//chick if Number equal Zero
		printf(" %f is equal Zero",fNumber);
	else if(fNumber<0)//chick if Number is Negative
		printf("%f is Negative",fNumber);

}
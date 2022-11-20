/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    18/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    C program to find the largest Number Among three Numbers*/
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
void void_CompareThreeNum(void);
#include <stdio.h>
int main()
{
void_CompareThreeNum();
}
/******************************************************************************
* \Syntax          : void void void_CompareThreeNum(void)
* \Description     : C program to find the largest Number Among three Numbers
* \Parameters (in) : void
* \Parameters (out): void
*******************************************************************************/
void void_CompareThreeNum(void)
{
	float fNum1,fNum2,fNum3;
	printf("Enter 3 Numbers :");
	scanf("%f",&fNum1);
	scanf("%f",&fNum2);
	scanf("%f",&fNum3);
	if((fNum1>=fNum2)&&(fNum1>=fNum3))//chick if Number1 largest or not
		printf("Largest Number is %.2f",fNum1);//printf Number1
	else if((fNum2>=fNum1)&&(fNum2>=fNum3))//chick if Number2 largest or not
		printf("Largest Number is %.2f",fNum2);//printf Number1
	else //chick if Number3 largest or not
		printf("Largest Number is %.2f",fNum3);//printf Number1
}
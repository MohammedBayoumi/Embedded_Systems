/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    18/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Check Whether a Number is Even OR Odd */
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#include <stdio.h>
#include <stdlib.h>

void void_EvenOdd(int s32Number);
int main()
{
	int s32Number;//declaration variable
	printf("Enter an integer you want to check ");//order to user to input a first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&s32Number);//push to memory the first variable Which was written by the user
	void_EvenOdd(s32Number);//Check Whether a Number is Even OR Odd
}
/******************************************************************************
* \Syntax          : void void void_EvenOdd(int s32Number)
* \Description     : Check Whether a Number is Even OR Odd
* \Parameters (in) : int s32Number
* \Parameters (out): void
*******************************************************************************/
void void_EvenOdd(int s32Number)
{
	if(s32Number%2==0)
		printf("%d is Even",s32Number);
	else
		printf("%d is Odd",s32Number);
}

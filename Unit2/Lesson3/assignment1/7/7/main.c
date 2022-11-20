

/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    18/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Write Source Code to Swap Two Numbers
                             without temp variable.				 	*/

/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void void_SwapingXOR(int fNumber1,int fNumber2 );
void void_SwapingAdd(int fNumber1,int fNumber2 );
int main()
{
	int fNumber1,fNumber2;//declaration variable
	printf("Enter value of a: ");//order to user to input a first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&fNumber1);//push to memory the first variable Which was written by the user
	printf("\n Enter value of b: ");//order to user to input a  second variable
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&fNumber2);//push to memory the second variable Which was written by the user
	void_SwapingXOR(fNumber1,fNumber2);
    void_SwapingAdd( fNumber1, fNumber2 );

	return 0;
}
/******************************************************************************
* \Syntax          : void void_SwapingXOR(int fNumber1,int fNumber2)
* \Description     : Swap Two Numbers using XOR
* \Parameters (in) : int fNumber1,int fNumber2
* \Parameters (out): void
*******************************************************************************/
void void_SwapingXOR(int fNumber1,int fNumber2)
{
	fNumber1=fNumber1^fNumber2;
	fNumber2=fNumber1^fNumber2;
	fNumber1=fNumber1^fNumber2;
	printf("\n After swapping, value of a = %d",fNumber1);//print the value of a after swapping
	printf("\n After swapping, value of b = %d",fNumber2);//print the value of b after swapping
}
/******************************************************************************
* \Syntax          : void void_SwapingAdd(int fNumber1,int fNumber2)
* \Description     : Swap Two Numbers using ADD and SUB
* \Parameters (in) : int fNumber1,int fNumber2
* \Parameters (out): void
*******************************************************************************/
void void_SwapingAdd(int fNumber1,int fNumber2 )
{
	fNumber1=fNumber1+fNumber2;
	fNumber2=fNumber1-fNumber2;
	fNumber1=fNumber1-fNumber2;
	printf("\n After swapping, value of a = %d",fNumber1);//print the value of a after swapping
	printf("\n After swapping, value of b = %d",fNumber2);//print the value of b after swapping

}


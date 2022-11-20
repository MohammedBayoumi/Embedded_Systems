
/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    19/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    program to Find Factorial of a Number*/
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#include <stdio.h>
int main()
{
	 long u32PositiveNumber,u32FactorialNum=1;//declaration u32PositiveNumber and definition  u32FactorialNum
	unsigned char i=1;//definition variable i
	printf("Enter an integer: ");//order to user to input variable
	scanf("%d",&u32PositiveNumber);////push to memory the  variable Which was written by the user
	if(u32PositiveNumber>=0)//do program if number is positive
	{
		while(i<=u32PositiveNumber)//while when i equal or lower than u32PositiveNumber
		{
			u32FactorialNum*=i++;//count i and muli '*' with u32FactorialNum
		}
		printf("Factorial Number = %d",u32FactorialNum);//printf result end of addition
	}
	else //if number is negative
	{
		printf("Error!!! Factorial of negative number doesnot exist");
	}
	return 0;
}
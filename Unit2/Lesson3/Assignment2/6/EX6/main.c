
/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    19/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    program to Calculate Sum of Natural Numbers */
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#include <stdio.h>
int main()
{
	unsigned long u32PositiveNumber,u32Sum=0;//declaration variable u32PositiveNumber and definition variable u32Sum
	unsigned char i=1;//definition variable i
	printf("Enter an integer");//order to user to input character
	scanf("%d",&u32PositiveNumber);////push to memory the  character Which was written by the user
	if(u32PositiveNumber>=0)//do program if number is positive
	{
		while(i<=u32PositiveNumber)//while when i equal or lower than u32PositiveNumber
		{
			u32Sum+=i++;//count i and add with u32Sum
		}
		printf("Sum = %d",u32Sum);//printf result end of addition
	}
	else //if number is negative
	{
		printf("%d is Negative",u32PositiveNumber);
	}
	return 0;
}
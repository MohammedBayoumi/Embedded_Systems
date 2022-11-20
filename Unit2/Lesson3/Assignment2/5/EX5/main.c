/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    19/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    program to Check a character is an Alphabet or Not */
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#include <stdio.h>
#include <stdlib.h>
void void_CheckAlphabetOrNot();
int main()
{
    while(1)
    	void_CheckAlphabetOrNot();
	return 0;
}
/******************************************************************************
* \Syntax          : void void_CheckAlphabetOrNot(void)
* \Description     : Check a character is an Alphabet or Not
* \Parameters (in) : void
* \Parameters (out): void
*******************************************************************************/
void void_CheckAlphabetOrNot(void)
{
	char character;//declaration variable
	printf("Enter an character to check\n ");//order to user to input character
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&character);//push to memory the  character Which was written by the user
	if(((character>='a')&&(character<='z'))||((character>='A')&&(character<='Z')))//if character is an Alphabet
	{
		printf("%c is an Alphabet",character);
	}
	else //if character is Not an Alphabet
	{
		printf("%c is Not an Alphabet",character);
	}
	printf("\n");
}

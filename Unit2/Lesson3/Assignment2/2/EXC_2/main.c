/****************************************************************/
/*   Author             :    Mohammed Bayoumi 				    */
/*	 Date 				:    18/11/2022						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    program to Check Vowel or Consonant */
/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/
#include <stdio.h>
#include <stdlib.h>
void void_CheckVowelorConsonant();
int main()
{
    while(1)
    	void_CheckVowelorConsonant();
	return 0;
}
/******************************************************************************
* \Syntax          : void void_CheckVowelorConsonant(void)
* \Description     : Check Vowel or Consonant
* \Parameters (in) : void
* \Parameters (out): void
*******************************************************************************/
void void_CheckVowelorConsonant(void)
{
	char Alphabets;//declaration variable
	printf("Enter an Alphabets to check\n ");//order to user to input Alphabet
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&Alphabets);//push to memory the  Alphabets Which was written by the user

	if((Alphabets>64)&&(Alphabets<91))//search for any Consonant Alphabet
	{
		printf("%c is a Consonant",Alphabets);
	}
	else if((Alphabets>96)&&(Alphabets<123))//search for any Vowel Alphabet
	{
		printf("%c is a Vowel",Alphabets);
	}
	else//if input out of range
	{
		printf("Wrong Acces");
	}
	printf("\n");

}


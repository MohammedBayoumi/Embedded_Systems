/*
 ==============================================================================================
 Name        : EX_3.c  Function H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : program to Revarse a Sentance Using Recursion 

 ==============================================================================================
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 void void_RevarseSentance(char *string ,char length);
 int main()
 {
	 char string[20],x;
	 printf("Enter the Sentance ");
     gets(string);
	 void_RevarseSentance(string,strlen(string));
 }
 /*
=========================================================================================================================
* \Syntax          : void void_RevarseSentance(char *string ,char length)
* \Description     : recursion function and end function when Length <0
* \Parameters (in) : char *string    -->> pointer to address of char
*                    char length     -->> Number of characters
* \Parameters (out): void
=========================================================================================================================
*/
void void_RevarseSentance(char *string ,char length)
{
	--length;
	printf("%c",string[length]);
	if(length>=1)
	void_RevarseSentance(string ,length);//recursion function and end function when u32Number <=1		
}
/*
 =================================================================================================
 Name        : EX_1.c  String H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : This program asks user to enter a string and a character and this program checks 
               how many times that character is repeated in the string entered by user. 
 =================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    unsigned char x,count=0;
	char string[100],character ;
	printf("Enter a string: ");//ask from user to enter a string
	gets(string);//store string inside string 
	x=strlen(string);//get the number of character
	printf("Enter a character to find frequency: ");
	scanf("%c",&character);//enter the character you want to search
	for(int i=0;i<x;i++)
	{
		if(string[i]==character)//when catch that character
		{
			count++;
		}
	}
	printf("Frequency of %c = %d",character,count);//print number of this character
	return EXIT_SUCCESS;}

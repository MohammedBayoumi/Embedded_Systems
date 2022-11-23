/*
 =================================================================================================
 Name        : EX_2.c  String H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : C Program to Find the Length of a String 
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
	for(int i=0;string[i]!= '\0';i++)//count number of character
	{
			count++;
	}

	printf("Length of string= %d",count);//print number of Length of string
	return EXIT_SUCCESS;}

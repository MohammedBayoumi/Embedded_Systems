/*
 =================================================================================================
 Name        : EX_2.c  String H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description :C Program to Reverse String Without Using Library Function You can only use library
               function strlen(),To find the length of the string  
 =================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    unsigned char x,count=0;
	char string[100],Temp ;
	printf("Enter a string: ");//ask from user to enter a string
	gets(string);//store string inside string 
	x=strlen(string);
	
	for(int i=0;i<x;i++)//count number of character
	{
		--x;
		Temp=string[i];
		string[i]=string[x];
		string[x]=Temp;
	}
		printf("Reverse string is %s",string);
	return EXIT_SUCCESS;}

/*
 * main.c
 *
 *  Created on: Nov 16, 2022
 *      Author: Mohammed Bayoumi
 */

#include <stdio.h>
#include <stdlib.h>
//Write C Program to Find ASCII Value of a Character
int main()
{
	char s8Number;//declaration variable
	printf("Enter the first Number ");//order to user to input a  character
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&s8Number);//push to memory the variable Which was written by the user
	printf("ASCII=%d",s8Number);//print ASCII
	return 0;
}



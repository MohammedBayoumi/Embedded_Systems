/*
 * main.c
 *
 *  Created on: Nov 16, 2022
 *      Author:Mohammed Bayoumi
 */

/*C Program to Print a Integer Entered by a User*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s32Number;//declaration variable
	printf("Enter your Number ");//order to user to input a variable
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&s32Number);//push to memory the variable Which was written by the user
	printf("\n%d",s32Number);//pop from memory the variable to print on screen
	return 0;
}

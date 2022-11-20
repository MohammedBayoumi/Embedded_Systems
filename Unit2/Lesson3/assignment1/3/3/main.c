/*
 * main.c
 *
 *  Created on: Nov 16, 2022
 *      Author: Mohammed Bayoumi
 */

#include <stdio.h>
#include <stdlib.h>
//Write C Program to Add Two Integers
int main()
{
	int s32Number1,s32Number2;//declaration variable
	printf("Enter the first Number ");//order to user to input a  first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&s32Number1);//push to memory the first variable Which was written by the user
	printf("\nEnter the second Number ");//order to user to input a  first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&s32Number2);//push to memory the variable Which was written by the user
	printf("\n sum=%d",s32Number1+s32Number2);//print a sum between first Number and second Number
	return 0;
}



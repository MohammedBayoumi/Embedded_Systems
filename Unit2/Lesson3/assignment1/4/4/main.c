/*
 * main.c
 *
 *  Created on: Nov 16, 2022
 *      Author: Mohammed Bayoumi
 */


#include <stdio.h>
#include <stdlib.h>
//Write C Program to Multiply two Floating Point Numbers
int main()
{
	float fNumber1,fNumber2;//declaration variable
	printf("Enter the first Number ");//order to user to input a  first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&fNumber1);//push to memory the first variable Which was written by the user
	printf("\nEnter the second Number ");//order to user to input a  first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&fNumber2);//push to memory the variable Which was written by the user
	printf("\n sum=%f",fNumber1+fNumber2);//print a sum between first Number and second Number
	return 0;
}

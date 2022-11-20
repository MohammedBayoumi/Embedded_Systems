/*
 * main.c
 *
 *  Created on: Nov 16, 2022
 *      Author: Mohammed Bayoumi
 */


#include <stdio.h>
#include <stdlib.h>
//Write Source Code to Swap Two Numbers
int main()
{
	float fNumber1,fNumber2,Temp;//declaration variable
	printf("Enter value of a: ");//order to user to input a first variable
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&fNumber1);//push to memory the first variable Which was written by the user
	printf("\n Enter value of b: ");//order to user to input a  second variable
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&fNumber2);//push to memory the second variable Which was written by the user
	Temp=fNumber1;
	fNumber1=fNumber2;
	fNumber2=Temp;
	printf("\n After swapping, value of a = %f",fNumber1);//print the value of a after swapping
	printf("\n After swapping, value of b = %f",fNumber2);//print the value of b after swapping
	return 0;
}


/*
 ==============================================================================================
 Name        : EX_2.c  Function H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : C program to calculate factorial of a Number using Recursion

 ==============================================================================================
 */
 #include <stdio.h>
 #include <stdlib.h>
 unsigned long u32_FactorialNumber(unsigned long u32Number);
 int main()
 {
	 long s32Number;
	 printf("Enter a Number : ");
     scanf("%d",&s32Number);//ask for user to enter number
	 while(s32Number<0)//when user assign negative number,print error massege and ask for him to try again
	 {
	     printf("Error!! enter positive number: "); 
		 scanf("%d",&s32Number);
	 }
	 printf("Factorial of %d = %d",s32Number,u32_FactorialNumber(s32Number));
 }
 /*
=========================================================================================================================
* \Syntax          : unsigned long u32_FactorialNumber(unsigned long u32Number)
* \Description     : calculate factorial of a Number using Recursion
* \Parameters (in) : unsigned long u32Number   -->> the number is been factorial
* \Parameters (out): unsigned long
=========================================================================================================================
*/
unsigned long u32_FactorialNumber(unsigned long u32Number)
{	
	if(u32Number>1)
	u32Number*=u32_FactorialNumber(u32Number-1);//recursion function and end function when u32Number <=1
    return u32Number;	
}
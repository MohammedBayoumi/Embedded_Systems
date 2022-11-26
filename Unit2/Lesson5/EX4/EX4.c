/*
 ==============================================================================================
 Name        : EX_4.c  Function H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : C Program to calculate the Power of a Number using Recursion 
 ==============================================================================================
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
unsigned long u32_PowerNumber(unsigned long u32Number ,unsigned long u32Power);
 int main()
 {
	 signed long s32Number,s32Power;
	 printf("Enter base Number: ");
	 scanf("%d",&s32Number);//ask for user to enter number
 
	 while(s32Number<0)//when user assign negative number,print error massege and ask for him to try again
	 {
	 printf(" Error!! Enter positive base Number: ");
	 scanf("%d",&s32Number);//ask for user to enter number
	 }
	 printf("Enter Power Number (Positive Number): ");
	 scanf("%d",&s32Power);//ask for user to enter of Power Number	
	 while(s32Power<0)//when user assign negative number,print error massege and ask for him to try again
	 {
	 printf(" Error!! Enter positive Power Number: ");
	 scanf("%d",&s32Power);//ask for user to enter Power number
	 }
    printf("%d ^ %d = %d",s32Number,s32Power,u32_PowerNumber(s32Number,s32Power));
 }
 /*
=========================================================================================================================
* \Syntax          : unsigned long u32_PowerNumber(unsigned long u32Number ,unsigned long u32Power)
* \Description     : C Program to calculate the Power of a Number using Recursion 
* \Parameters (in) : unsigned long u32Number  -->> a base Number:
*\                   unsigned long u32Power   -->> a Power of Number
* \Parameters (out): unsigned long
=========================================================================================================================
*/
unsigned long u32_PowerNumber(unsigned long u32Number ,unsigned long u32Power)
{
	unsigned long i,u32Result=1;
 
	if(u32Power>1)
	u32Number*=u32_PowerNumber(u32Number,(u32Power-1));//recursion function and end function when u32Number <=1
/*
==Another solution==
  for(i=0;i<u32Power;i++)
	{
		u32Result*=u32Number;
	}
	printf("%d ^ %d = %d",u32Number,u32Power,u32Result);
*/	
    return u32Number;
}
/*
 ==============================================================================================
 Name        : EX_1.c  Function H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : Prime Numbers Between two Intervals By making user defined function

 ==============================================================================================
 */
 #include <stdio.h>
 #include <stdlib.h>
 void void_PrimeNumber(unsigned long u32MinNumber,unsigned long u32MaxNumber);
 int main()
 {
	 signed long s32MinNumber,s32MaxNumber;
	 printf("Enter Two Numbers (intervals): ");//ask from user to enter Two Numbers 
     scanf("%d",&s32MinNumber);
     scanf("%d",&s32MaxNumber);
	 while(s32MinNumber<0||s32MaxNumber<0)//when user assign negative number,print error massege and ask for him to try again
	 {
	     printf("Error!! enter positive number: "); 
		 scanf("%d",&s32MinNumber);
         scanf("%d",&s32MaxNumber);
	 }
	 if(s32MinNumber<s32MaxNumber)//when user enter Minimum number befor Maxmum number 
	     void_PrimeNumber(s32MinNumber,s32MaxNumber);//pass two numbers by value 
     else //when user assign Maxmum number befor Minimum number
		 printf("Two numbers are equal !! and No numpers Between these numbers");

 }
 /*
=========================================================================================================================
* \Syntax          : void void_PrimeNumber(unsigned long u32MinNumber,unsigned long u32MaxNumber)
* \Description     : Prime Numbers Between two Intervals By making user defined function
* \Parameters (in) : unsigned long u32MinNumber -->> start number to count
*                    unsigned long u32MaxNumber -->> end number to count 
* \Parameters (out): void
=========================================================================================================================
*/
void void_PrimeNumber(unsigned long u32MinNumber,unsigned long u32MaxNumber)
{
	 unsigned long i;
	 unsigned char flag=0;
	 printf("Prime numbers between %d and %d are :  ",u32MinNumber,u32MaxNumber);
     for( i=u32MinNumber;i<=u32MaxNumber;i++)//for loop to find start number 
	 {
		 for(unsigned int j=2;j<=(i/2)||(i==1)||(i==0);j++)
		 {
			 if(i==2)//when found number 2 print it
			 {
		    	printf("%d  ",i);	
                break;				
			 }
			 if((i%j==0)||(i==1))//when divide number with any number and thr result equal true,this number doesnot prime 
			 {
				 flag=1;
				 break;
		     }
		 }
	     if(flag==0)//when that number be prime
		 {
			printf("%d  ",i);
		 }
		 flag=0;
	 }
}
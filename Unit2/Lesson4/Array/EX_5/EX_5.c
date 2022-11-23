/*
 =================================================================================================
 Name        : EX_5.c  Array H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : C Program to Search an element in Array
 =================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void voidAccesElementsOfArray(int *Arr,unsigned char x);
void voidSearchElementOfArray(int *Arr,unsigned char x);
int main(void){
    unsigned char x;
	printf("Enter the numbers of Element: ");//ask from user to enter the numbers of Elements
	scanf("%d",&x);
	int Arr[x];//decleration array
	
	voidAccesElementsOfArray(Arr,x);//passing address of array and numbers of Elements
	voidSearchElementOfArray(Arr,x);//search element for array
	return EXIT_SUCCESS;}
/*
 ========================================================================================================================
* \Syntax          : void voidAccesElementsOfArray(int *Arr,unsigned char x)
* \Description     : order from user to acces elements for each array
* \Parameters (in) : int *Arr    -->>pointer to first element of array of int 
                     unsigned char  -->>Number of elments of array
* \Parameters (out): void
 =========================================================================================================================
*/
void voidAccesElementsOfArray(int *Arr,unsigned char x){
	printf("Enter the elements of Array of elements :\n");//ask from user to enter the elements of Array
	for(unsigned char count=0;count<x;count++)// counter to take each elments from user
	{
			printf("Enter Array[%d]= ",count);//Ask from user to enter element
			scanf("%d",&Arr[count]);//fanction to store input from memory
    }
}
/*
 ========================================================================================================================
* \Syntax          : void voidInsertElementsOfArray(int *fArr,unsigned char x)
* \Description     : order from user to acces element and location are inserted for matrix
* \Parameters (in) : int *Arr    -->>pointer to first element of array of int 
                     unsigned char  -->>Number of elments of array
* \Parameters (out): void
 =========================================================================================================================
*/
void voidSearchElementOfArray(int *Arr,unsigned char x)
{
	int s32Value,s32Locaton;
	printf("\n Enter the elements to be searched : ");
	scanf("%d",&s32Value);//enter value of element
    for(unsigned char i=0;i<x;i++)
	{
		if(Arr[i]==s32Value)
		{
			printf("Number found at the location = %d",i+1);
		}
	}	
}

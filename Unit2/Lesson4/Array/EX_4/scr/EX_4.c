/*
 =================================================================================================
 Name        : EX_2.c  Array H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : C Program to Insert an element in an Array 
 =================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void voidAccesElementsOfArray(int *Arr,unsigned char x);
void voidInsertElementsOfArray(int *Arr,unsigned char x);
void voidPrintElementsOfArray(int *Arr,unsigned char x);
int main(void) {
    unsigned char x;
	printf("Enter the numbers of Element: ");//ask from user to enter the numbers of Elements
	scanf("%d",&x);
	int Arr[x];//decleration array
	printf("Enter the elements of Array of elements :\n");//ask from user to enter the elements of Array
	voidAccesElementsOfArray(Arr,x);//passing address of array and numbers of Elements
	voidPrintElementsOfArray(Arr,x);//print elements of array
	voidInsertElementsOfArray(Arr,x);//Insert Elements Of Array
	voidPrintElementsOfArray(Arr,x);//print elements of array
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
void voidInsertElementsOfArray(int *Arr,unsigned char x)
{
	int s32Value,s32Locaton;
	printf("\n Enter the element to be inserted : ");
	scanf("%d",&s32Value);//enter value of element
	printf("Enter the Location : ");
	scanf("%d",&s32Locaton);//enter value of location element
	Arr[s32Locaton-1]=s32Value;	
}
/*
 ========================================================================================================================
* \Syntax          : void voidPrintElementsOfArray(int *fArr,unsigned char x)
* \Description     : print element of array 
* \Parameters (in) : int *Arr    -->>pointer to first element of array of int 
                     unsigned char  -->>Number of elments of array
* \Parameters (out): void
 =========================================================================================================================
*/
void voidPrintElementsOfArray(int *Arr,unsigned char x)
{
	for(int i=0;i<x;i++)
	{
		printf("%d  ",Arr[i]);
	}
}

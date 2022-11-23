/*
 =================================================================================================
 Name        : EX_2.c  Array H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : the program takes n numbers of element from user (where,n is specified by user),
               stores data in an array and calculates the average of those numbers
 =================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void voidAccesElementsOfArray(float *fArr,unsigned char x);
int main(void) {
    unsigned char x;
	printf("Enter the numbers of data: ");//ask from user to enter the numbers of data
	scanf("%d",&x);
	float fArr[x];//decleration array of floating
	printf("Enter the elements of Array of elements :\n");//ask from user to enter the elements of Array
	voidAccesElementsOfArray(fArr,x);
	return EXIT_SUCCESS;}
/*
 ========================================================================================================================
* \Syntax          : void voidAccesElementsOfArray(float *fArr,unsigned char x)
* \Description     : order from user to acces elements for each matrix
* \Parameters (in) : float *fArr    -->>pointer to first element of array of float 
                     unsigned char  -->>Number of elments of array
* \Parameters (out): void
 =========================================================================================================================
*/
void voidAccesElementsOfArray(float *fArr,unsigned char x){
	float fAverage=0.0,sum=0.0;
	for(unsigned char count=0;count<x;count++)// counter to take each elments from user and add this element on sum
	{
			printf("Enter Array[%d]= ",count);//Ask from user to enter element
			scanf("%f",&fArr[count]);//fanction to store input from memory
			sum+=fArr[count];//Add new element to sum
    }
	printf("Average equal : %.2f",sum/x);//print result function of average =sum of elment/num of element
}

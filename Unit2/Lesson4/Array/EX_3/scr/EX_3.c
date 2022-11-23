/*
 ==============================================================================================
 Name        : EX_1.c  Array H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : fThis program asks user to enter a matrix (size of matrix is specified by user)
               and this program finds the transpose of that matrix and displays it. 

 ==============================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void voidAccesElementsOfArray(int (*Matrix)[],unsigned char ROW,unsigned char COL);
void voidPrintElementsArray(int (*Matrix)[],unsigned char ROW,unsigned char COL);
int main(void) {
	unsigned char COL,ROW,NewRow,NewCol;
	printf("please enter rows and column of matrix : ");
	scanf("%d",&ROW);//Ask from user to enter a number of Rows
	scanf("%d",&COL);//Ask from user to enter a number of Columns
	NewRow=COL;//copy the num of colmns in old matrix to number of Rows in New matrix
	NewCol=ROW;//copy the num of rows in old matrix to number of cols in New matrix
	int MatArr1[ROW][COL];//declration matrix and user enter elements in this matrix  
	int MatArr2[NewRow][NewCol];//declration New matrix 


	printf("Enter the elements of matrix :\n");//Ask from user to enter the elements 
	voidAccesElementsOfArray(MatArr1,ROW,COL);//passing address of array ,num of Rows and num of colmns 
	voidPrintElementsArray(MatArr1,ROW,COL);//passing address of array ,num of Rows and num of colmns to print this matrix
	printf("\nTranspose of Matrix : \n");
	for(unsigned char i=0;i<ROW;i++)//for loop to count num of rows
	{
		for(unsigned char j=0;j<COL;j++)//for loop to count num of rows
		{
			MatArr2[j][i]=MatArr1[i][j];//transpose of that matrix and copy it to Name Matrix
		}
	}
	voidPrintElementsArray(MatArr2,NewRow,NewCol);//passing address of New Matrix ,num of New Rows and num of New Columns
	return EXIT_SUCCESS;
}
/*
 ========================================================================================================================
* \Syntax          : void voidAccesElementsOfArray(int (*fMatrix)[],unsigned char ROW,unsigned char COL)
* \Description     : order from user to acces elements of matrix
* \Parameters (in) : float (*fMatrix)[] -->> pointer to address of first elment of matrix
*                    unsigned char ROW  -->> Number of Rows
*                    unsigned char COL  -->> Number of Column
* \Parameters (out): void
 =========================================================================================================================
*/
void voidAccesElementsOfArray(int (*Matrix)[],unsigned char ROW,unsigned char COL)
{
	unsigned char j=0,i=0;//definition variable
	for(unsigned char count=0;count<ROW*COL;count++){// counter to take each elments from user
		if(j==COL)//j represent colomn and max num of col is 2 so this if stop j for reach max num of col
		{
			j=0;
			i++;//count number of row
		}
			printf("Enter element[%d][%d]= ",i,j);//Ask from user to enter element
			scanf("%d",&(*Matrix)[count]);//fanction to store input from memory
	        j++;}//count number of col
}
/*
=========================================================================================================================
* \Syntax          : void voidPrintElementsArray((int (*Matrix)[],unsigned char ROW,unsigned char COL)
* \Description     : display matrix you are passing it 
* \Parameters (in) : inr (*Matrix)[]    -->> pointer to address of element of matrix
*                    unsigned char ROW  -->> Number of Rows
*                    unsigned char COL  -->> Number of Column
* \Parameters (out): void
=========================================================================================================================
*/
void voidPrintElementsArray(int (*Matrix)[],unsigned char ROW,unsigned char COL)
{
	unsigned char j=0,i=0;//definition variable
	for(unsigned char count=0;count<ROW*COL;count++){// counter to take each elments from user
		if(j==COL)//j represent colomn so when 'if' is true,the j reach max num of Columns
		{
			j=0;
			i++;//count number of row
			printf("\n");//New line
		}
			printf("%d    ",(*Matrix)[count]);//print element of matrix and represent it as 2D matrix
	        j++;
	}
}

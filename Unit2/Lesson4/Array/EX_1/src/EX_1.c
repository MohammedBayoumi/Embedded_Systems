/*
 ============================================================================
 Name        : EX_1.c  Array H.W
 Author      : Mohammed Bayoumy
 Version     : 1.0 v
 Description : find sum of two matrix of order 2*2 using multidimensional
               arrays where , elements of matrix are enter by user
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define col1 2
#define row1 2
#define col2 2
#define row2 2
void voidAccesElementsOfArray(float (*fMatrix)[],unsigned char ROW,unsigned char COL,char ArrName);
void voidSumOfTwoArray(float (*fMatrix1)[],float (*fMatrix2)[],float (*fSumArrs)[]);
int main(void) {

    unsigned char i=0,j=0;
	float fMatArr1[row1][col1];
	float fMatArr2[row2][col2];
	float fSumArr[2][2];
	printf("Enter the elements of 1st matrix :\n");
	voidAccesElementsOfArray(fMatArr1,row1,col1,'a');
	printf("Enter the elements of 2nd matrix :\n");
	voidAccesElementsOfArray(fMatArr2,row1,col1,'b');
	voidSumOfTwoArray(fMatArr1,fMatArr2,fSumArr);
	for(unsigned char count=0;count<4;count++)
	{
		if(j==2)
		{
			j=0;
			i++;
		}
		printf("sum[%d][%d]= %.1f ;\n",i,j,fSumArr[i][j]);
		j++;
	}
	return EXIT_SUCCESS;
}
/*
 ========================================================================================================================
* \Syntax          : void voidAccesElementsOfArray(float (*fMatrix)[],unsigned char ROW,unsigned char COL,char ArrName)
* \Description     : order from user to acces elements for each matrix
* \Parameters (in) : float (*fMatrix)[] -->> pointer to address of first elment of matrix
*                    unsigned char ROW  -->> Number of Rows
*                    unsigned char COL  -->> Number of Column
*                    char ArrNam        -->> Name of array which called on the screen.should be character
* \Parameters (out): void
 =========================================================================================================================
*/
void voidAccesElementsOfArray(float (*fMatrix)[],unsigned char ROW,unsigned char COL,char ArrName)
{
	unsigned char j=0,i=0;//definition variable
	char ch =';';
	for(unsigned char count=0;count<ROW*COL;count++){// counter to take each elments from user
		if(j==2)//j represent colomn and max num of col is 2 so when 'if' is true,the j reach max num of Columns
		{
			j=0;
			i++;//count number of row
		}
			printf("Enter %c[%d][%d]= ",ArrName,i,j);//Ask from user to enter element
			scanf("%f",&(*fMatrix)[count]);//fanction to store input from memory
	        j++;}//count cumber of col
}
/*
=========================================================================================================================
* \Syntax          : void voidSumOfTwoArray(float (*fMatrix1)[],float (*fMatrix2)[],float (*fSumArrs)[])
* \Description     : find sum of two matrix using and storge sum in (*fSumArrs)[]
* \Parameters (in) : float (*fMatrix1)[] -->> pointer to address of first elment of matrix in fMatArr1"First matrix"
                     float (*fMatrix2)[] -->> pointer to address of first elment of matrix in fMatArr2"second matrix"
					 float (*fSumArrs)[] -->> take sum between two matrix
* \Parameters (out): void
=========================================================================================================================
*/
void voidSumOfTwoArray(float (*fMatrix1)[],float (*fMatrix2)[],	float (*fSumArrs)[])
{
	for(unsigned char count=0;count<4;count++)//counter to add each elments of 1st array with another elments of 2nf array
		(*fSumArrs)[count]=(*fMatrix1)[count]+(*fMatrix2)[count];//store result inside (*fSumArrs)[count]
}

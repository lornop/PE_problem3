/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4.
If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. 
The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/
#include <stdio.h>
int numberize(int number[]); // returns the digits in the array as just one int number
int arrange(int test, int digits[], int number[]); //Re-arrange the number 

int main()
{
int max = 1000000;
int count = 0;
int digits[10] = {0,1,2,3,4,5,6,7,8,9};
int number[10];
int n = 0;
int test = 0;
int value = 0;


//***********************************************************
for (test = 123456789; count <= 9876543210; test++)
{
	//number[] = arrange(test, digits[], number[]);
	
	
	
	//value = numberize(number[]);
}
printf("%d\n", value);


return 0;
}



//************************************************************
//This is the function to rearrange the digits
int arrange(int test, int digits[], int number[])
//

{
int available[10] = {1,1,1,1,1,1,1,1,1,1};
int n = 0;
int x = 0;



for (n = 0; n < 10; n++)
{
	
}


return 0;
}
//***********************************************************



//************************************************************
//This is the function to turn the digits into just one number
int numberize(int number[])


{
int n, z = 0;
int finalnum = 0;
int exponent = 0;

for (n = 0; n < 10; n++)
{
	exponent = 1;
	for (z = (9 - n); z > 0; z--)
	{
		exponent = (exponent * 10);
	}
	
	finalnum = finalnum + (number[n] * exponent);
}

return finalnum;
}
//***********************************************************

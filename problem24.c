/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4.
If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. 
The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

#include <stdio.h>
//**********************************************

//Functions

//Global Variables

__int32_t
million 				= 1000000,
permutation_count 		= 0,
digits[10] 				= {0,1,2,3,4,5,6,7,8,9},
permutation_array[10] 	= {0,1,2,3,4,5,6,7,8,9},
permutation_index 		= 0,
test_placeholder		= 0;

//**********************************************
//Start the Main loop

int main()
{
	while (permutation_count < million)
	{
		for(permutation_index = 9; permutation_index >=0; permutation_index--)
		{

		}
	}

	//If we are all done print out the millionth permutation
	printf("The Millionth Permutation is : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", permutation_array[i]);
	}
	printf("\n");

	return 0;
}


//**********************************************
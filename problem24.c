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
void do_Permutation(__int32_t high_index);
__int32_t find_lowest_number(__int32_t current_index);
void add_permutation();
__int32_t find_same_number_index(__int32_t, __int32_t);
void print_permutation();



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




return 0;
}


//**********************************************
void do_Permutation(__int32_t high_index)
{

	__int32_t 
	working_index = high_index + 1,
	temp_value = 9,
	low_number;



}



//**********************************************
void add_permutation()
{
	permutation_count++;
}

//**********************************************
void bubbleSort(int arr[], int startIdx) {
    int n = 10;
	for (int i = startIdx; i < n - 1; i++) {
        for (int j = startIdx; j < n - i - 1; j++) {
            // Your sorting logic here
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//**********************************************
__int32_t find_same_number(__int32_t number_to_find, __int32_t starting_index)
{

	for (__int32_t n = starting_index; n < 10; n++)
	{
		if (number_to_find == permutation_array[n])
		{
			return n;
		}
	}

}

//**********************************************
void print_permutation()
{
	//If we are all done print out the millionth permutation
	printf("The Millionth Permutation is : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", permutation_array[i]);
	}
	printf("\n");
}
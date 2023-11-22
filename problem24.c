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



//Run The Permutation
void do_Permutation(__int32_t high_index);

//Add another permutation to the total
void add_permutation();

//Find the same numbers index. input is the number, and the starting index. Returns Index
__int32_t find_same_number_index(__int32_t, __int32_t);

//print the digits of the permutation
void print_permutation();

//Swap digits based on the input indexes
void swap_digits_with_indexes(__int32_t, __int32_t);

//Find the lowest number in the array Starting Number, Starting Index. Returns index of lowest number
__int32_t find_lowest_number(__int32_t, __int32_t); 	



//Global Variables

__int32_t
million 				= 1000000,
permutation_count 		= 1,
digits[10] 				= {0,1,2,3,4,5,6,7,8,9},
permutation_array[10] 	= {0,1,2,3,4,5,6,7,8,9},
permutation_index 		= 9,
test_placeholder		= 0;

//**********************************************
//Start the Main loop

int main()
{


	
	while (permutation_count <= million)
	{
	__int32_t 
	temp_number_index,
	lowest_number_index;
		

		if ( (permutation_array[permutation_index] + 1) <= 9)
		{
			//find the indexes of swapping numbers
			temp_number_index = find_same_number_index((permutation_array[permutation_index] + 1), permutation_index + 1);
			//then swap them
			swap_digits_with_indexes(permutation_index, temp_number_index);



			//Run the algorithm to sort out the permutation
			do_Permutation(permutation_index);
			add_permutation();

		}
		
		else
		{
			permutation_index --;
		}

		if( (permutation_count >= million) || (permutation_index < 0) )
		{
			print_permutation();
			return 0;
		}



	}
	
	print_permutation;
	return 0;

}





//**********************************************
void do_Permutation(__int32_t high_index)
{
//high index is the leftmost digit of the permutation, we dont want to do anyting with it!!
	__int32_t 
	working_index 			= high_index + 1,
	temp_value 				= permutation_array[working_index],
	low_number_index,
	temp_index				= 0,
	low_number 				= 0;

	//Just in case we are doing something we shouldnt be
	if(working_index > 9 || working_index < 0)
	{
		return;
	}

	//First lets find the smallest number and put it in the leftmost place

	for(temp_index = working_index; temp_index < 9; temp_index++)
	{
		low_number_index = find_lowest_number((permutation_array[temp_index]), temp_index);
		swap_digits_with_indexes(temp_index, low_number_index);
	}
	
	// lowest_number_index = find_lowest_number((permutation_array[working_index]), working_index);
	// swap_digits_with_indexes(working_index, lowest_number_index);



}

//**********************************************
void swap_digits_with_indexes(__int32_t first_index, __int32_t second_index)
{
	__int32_t
	first_digit = permutation_array[first_index],
	second_digit = permutation_array[second_index];

	permutation_array[second_index] = first_digit;
	permutation_array[first_index] = second_digit;

}




//**********************************************
__int32_t find_same_number_index(__int32_t number_to_find, __int32_t starting_index)
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
__int32_t find_lowest_number(__int32_t number, __int32_t index)
{
	__int32_t low_num_index = index;
	for (index; index <=9; index++)
	{
		if (permutation_array[index] < number)
		{
			number = permutation_array[index];
			low_num_index = index;
		}
	}
	return low_num_index;
}


//**********************************************
void add_permutation()
{
	permutation_count++;
}


//**********************************************
void print_permutation()
{
	//If we are all done print out the millionth permutation
	printf("The %d th Permutation is : ", permutation_count);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", permutation_array[i]);
	}
	printf("\n");
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

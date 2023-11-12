/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4.
If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. 
The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/
#include <stdio.h>


void DoPermutation(__int32_t highestdigit);


__int32_t
million                 = 1000000,
permutation_count       = 0,
digitsarray[10]         = {0,1,2,3,4,5,6,7,8,9},
permutations_per_digit  = 0,
arrayindex              = 10;       //leave this at 10, its taken into consideration in the permutation fucntion




int main()
{

    while (permutation_count < million)             //run until we get to the millionth permutation
    {

        for (permutations_per_digit = (10 - arrayindex); permutations_per_digit >= 0; permutations_per_digit -- )
        {
            DoPermutation(arrayindex - permutations_per_digit);       //where the magic happens
        }
        



        arrayindex --;
    printf("%d\n", permutation_count);
    }



return 0;
}


//**************************************************************
void DoPermutation(__int32_t highestdigit)
{
    
    __int32_t 
    currentdigit    = 0,
    tempmove        = 0,
    tempstorage     = 0;

    highestdigit --;        //because the array starts at 0 - 9
    currentdigit = highestdigit + 1;

    if (currentdigit > 8)
    {
        currentdigit = 8;
    }
    tempstorage = digitsarray[highestdigit];
    digitsarray[highestdigit] = digitsarray[9];

    while (currentdigit <= 9)
    {
        tempmove = digitsarray[currentdigit];
        digitsarray[currentdigit] = tempstorage;

        tempstorage = tempmove;

        currentdigit ++;
        
    }
    permutation_count++;

    
}



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
permutations_per_count  = 0,
digit                   = 10;                       //gonna leave this at 10 because its easier on my brain. -1 it when passed to DoPermutation(digit - 1); 




int main()
{

    while (permutation_count < million)             //run until we get to the millionth permutation
    {

        for (permutations_per_count = digit; permutations_per_count > digit; permutations_per_count--)
        {
            DoPermutation(permutations_per_count - 1);       //where the magic happens
        }
        



        digit --;               //we start at the end of the array [9]
    printf("%d\n", permutation_count);
    }



return 0;
}


//**************************************************************
void DoPermutation(__int32_t highestdigit)
{
    __int32_t 
    currentdigit    = highestdigit + 1,
    tempmove        = 0,
    tempstorage     = 0;

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

    //do stuff
}



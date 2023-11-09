/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4.
If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. 
The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/
#include <stdio.h>
int main()
{
    long int 
    million                 = 1000000,
    permutation_count       = 0,
    digitsarray[10]         = {0,1,2,3,4,5,6,7,8,9},
    digit                   = 10,
    digitcount              = 0;


    while (permutation_count < million)             //run until we get to the millionth permutation
    {
        //for (digit = 10; digit >= 0; digit --)      //change every digit in the array
        if ( digit >= 0)
        {
            digit --;

            digitcount = digit;

            permutation_count++;

            //move some numbers around in the array

        }

    printf("%d\n", permutation_count);
    }



return 0;
}



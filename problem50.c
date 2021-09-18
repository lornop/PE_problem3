/*


The prime 41, can be written as the sum of six consecutive primes:
41 = 2 + 3 + 5 + 7 + 11 + 13

This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?

*/


#include <stdio.h>
int primecheck(int x, int y);
int main()
{
int top = 1000000;
int x, y, z = 0;
int max, maxcount, count, remainder, prime, numberofprimes, sum = 0;
int primes[top];

//initialize the array
for (x = 0; x < top; x++)
{
	primes[x] = 0;
}


// First Prime is 2 because its special
primes[0] = 2;
y = 1;
x = 3;
while (x < top)
{
	remainder = x % 2;
	if (remainder == 0)
	{
		goto notprime;
	}
	if (primecheck(x, y) == 0)
	{
		primes[y] = x;
		numberofprimes = y;
		y++;
	}
notprime:
	z = 0;
// Print every 1000th number just so theres something going on
	if (x % 1000 <= 1)
	{	
		printf("%d\n", x);

	}
x += 2;
}

// Print the first 50 primes to make sure its working
for (x = 0; x < 50; x++)
{
	printf("Prime %d = %d ", x, primes[x]);
	if (x % 3 == 0)
	{	
		printf("\n");
	}
	
}

printf("We found a total of %d primes under %d. \n", numberofprimes, top);
printf("The Largest Prime is %d \n", primes[numberofprimes]);

//Now we need to figure out how to find the consecutive primes and its prime sum?????
//Try to start at 1st prime, add up primes until it gets to 1 million. Then start at 2nd prime etc.... 
//****************************************************************************************************
max = 0;
maxcount = 0;

for (z = 0; z < numberofprimes; z++)
{
	x = primes[z];	
	y = z + 1;
	count = 1;
	
	if (y >= numberofprimes)
	{
		goto end;
	}
	
	for (; x < top; y++)
	{
		//printf("nop=%d x=%d y=%d z=%d pz=%d max=%d maxc=%d top=%d\n", numberofprimes, x, y, z, primes[z], max, maxcount,top);
		x = x + primes[y];
		count++;
		if (x > top)
		{
			goto next;
		}
		if (x % 2 == 0)
		{
			goto next;
		}
		if (primecheck(x, y) == 0)
		{
			if (count > maxcount)
			{
				maxcount = count;
				max = x;
			}
		}
	next:
	remainder = 0;
	}
//printf("max= %d maxcount=%d \n", max, maxcount);					
}		
end:	
// Final Result
printf("The number is %d and it has %d terms\n", max, maxcount);
return 0;
}

//***********************************************************
// Function to determine if the number is prime or not
// Return 0 if its prime, 1 if not prime
//***********************************************************

int primecheck(int x, int y)
{
int remainder, z, a = 0;

//printf("Primecheck");
for (z = ((x / 2)+1); z > 1; z--)
{
	remainder = x % z;
	if (remainder == 0)
	{
		a = 1;
		break;
	}
}

return a;
}

/*

A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.


*/


#include <stdio.h>
int main()
{


int max = 28123;
int a, b, c, x, y, z, n = 0;
int abundants[10000];
int test[10000];
long long int sum;


//initialize the arrays

for (x = 0; x < 10000; x++)
	{
	abundants[x] = 0;
	test[x] = 0;
	}

// ********************************************
// Start the program
n = 0;
for (a = 1; a <= max; a++)
{


	x = 0;
	for (b = 1; b < a; b++)
	{
		c = a % b;
		if (c == 0)
		{
			test[x] = b;
			x++;
		}
	}
	z = 0;	
	for (y = 0; y < x; y++)
	{
		z = z + test[y];
	}
	if (z > a)
	{
		abundants[n] = a;
		n++;
	}

}
n--;
printf("There are %d abundants found\n", n);
printf("The largest is %d\n", abundants[n]);
printf("The smallest is %d\n", abundants[0]);

// Now we need to calculate which numbers are not the sum of two abundants

sum = 0;


for (a = 1; a < max; a++)
{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			z = abundants[x] + abundants[y];
			if (z == a)
			{
				goto nope;
			}
		}
	}
	sum = sum + a;	
	nope:
	c = 0;
}


printf("The sum is %lli\n", sum);
return 0;
}

/*
for (a = 1; a < max; a++)
{
	for (x = 0; x <= n; x++)
	{

		for (y = 0; y <= x; y++)
		{
		printf("a = %d |x = %d | y = %d |  z = %d | sum = %lli\n", a, x, y, z, sum);
			z = abundants[x] + abundants[y];
			if (z == a);
			{
				goto nope;
			}

		}
	}
	sum = sum + a;
	nope:
	c = 0;
}

*/

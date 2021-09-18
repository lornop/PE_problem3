/*
Euler discovered the remarkable quadratic formula:

n2+n+41

It turns out that the formula will produce 40 primes for the consecutive integer values 0≤n≤39.
 
However, when n=40,402+40+41=40(40+1)+41 is divisible by 41, and certainly when n=41,412+41+41 is clearly divisible by 41.

The incredible formula n2−79n+1601 was discovered, which produces 80 primes for the consecutive values 0≤n≤79.

The product of the coefficients, −79 and 1601, is −126479.

Considering quadratics of the form:

n2+an+b, where |a|<1000 and |b|≤1000

where |n| is the modulus/absolute value of n
e.g. |11|=11 and |−4|=4

Find the product of the coefficients,a and b, for the quadratic expression that produces the maximum number of primes for consecutive values of n, starting with n=0.
*/

#include <stdio.h>

int primecheck(long long int x);



int main()
{
int acoefficient = 0;
int bcoefficient = 0;
int numofprimes = 0;
long long int check;
int n;
int max = 1000;
long long int x, y, z = 0;
int maxprimes = 0;
int product = 0;
int answer[4] = {0, 0, 0, 0}; // 0 is maxprimes, 1 is acoefficient, 2 is bcoefficient and 4 is product

answer[0] = 0;
for (acoefficient = -999; acoefficient < max; acoefficient++)
	{
		for (bcoefficient = -1000; bcoefficient <= max; bcoefficient++)
			{
				numofprimes = 0;
				for (n = 0; ; n++)
					{
						x = ((n*n) + (acoefficient*n) + bcoefficient);
						//printf("n = %d  a = %d  b = %d  x = %lli \n", n, acoefficient, bcoefficient, x);
						if (primecheck(x) == 1)
							{
								break;
							}
						else
							{
								numofprimes = numofprimes + 1;
								if (numofprimes > answer[0])
									{
										answer[0] = numofprimes;
										answer[1] = acoefficient;
										answer[2] = bcoefficient;
										answer[3] = acoefficient * bcoefficient;
									}
							}
					}
			}
	}

printf("When a = %d and b = %d there are %d consecutive primes. The answer is %d \n", answer[1], answer[2], answer[0], answer[3]);

return 0;
}


//***********************************************************
// Function to determine if the number is prime or not
// Return 0 if its prime, 1 if not prime
//***********************************************************

int primecheck(long long int x)
{
long long int remainder, z, a = 0;

//printf("Primecheck");
if (x < 0)
{
for (z = ((x / 2)-1); z < -1; z++)
{
	remainder = x % z;
	if (remainder == 0)
	{
		a = 1;
		break;
	}
}
}
else
{
for (z = ((x / 2)+1); z > 1; z--)
{
	remainder = x % z;
	if (remainder == 0)
	{
		a = 1;
		break;
	}
}
}
return a;
}

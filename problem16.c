/*
Problem 16

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2 to the power of 1000?

*/

#include <stdio.h>
int reminder(int r, int digit, int digits[]);
int main()
{
long long int x;
int y = 2;
int digits[10000];
int factor = 2; 
long long int sum = 0;
int n = 1000;
for (x = 0; x < 10000; x++)
	{
		digits[x] = 0;
	}
digits[9999] = 2;
for (n = 999; n > 0; n--)
{																					
	for (x = 9999; x >= 0; x--)
	{
		digits[x] = digits[x] * 2;
	}
	for (x = 9999; x >= 0; x--)
	{
		if (digits[x] > 9)
		{
			digits[x] = digits[x] - 10;
			reminder(1, (x-1), digits);
		//printf("%dx ", x);
		}
	}
printf("%dn ", n);	
}	
for (x = 0; x <= 9999; x++)
{
sum = digits[x] + sum;
printf("%d ", digits[x]);
}
printf("The Sum is %lli \n ", sum);
return 0;
}

// Function to add the remainder to the next digit of the array

int reminder(int r, int digit2, int digits[])
{
//printf("doing digit %d \n", digit2);
digits[digit2] = digits[digit2] + r;
if (digits[digit2] > 9)
	{ 
	digits[digit2] = digits[digit2] - 10;
	reminder(1, (digit2-1), digits);
	}
return 0;
}

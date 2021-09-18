/*

Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.

*/


#include <stdio.h>
int divisors(int num);
int main()
{
int max = 10000;
int sum, num = 0;
int a, b, c = 0;
int x, y, z = 0;
int first_sum = 0;
int second_sum = 0;
int total_sum = 0;

// Start the program

for (a = 1; a < max; a++)
{
	b = divisors(a);
	printf("The number is %d and the sum is %d\n", a, b);
	if (b < a)
	{
		c = divisors(b);
		if (c == a)
		{
			(total_sum = total_sum + a + b);
		}
	}		
}
	







printf("The total sum is %d \n", total_sum);
return 0;
}
int divisors(int num)
{
int sum = 0;
int a, b, c = 0;

sum = 0;
for (a = 1; a < (num/2)+1; a++)
{
	if (num % a == 0)
	{
		sum = sum + a;
	}
}
  
return sum;
}

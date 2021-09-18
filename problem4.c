/*


A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/


#include <stdio.h>
int palindrome(int z);

int main()
{
int x, y, z, p, largest = 0;

for (x = 999; x > 0; x--)
	{
	//printf("x = %d \n", x);
	for (y = 999; y > 0; y--)
		{
		z = x * y;
		//printf("1 z = %d x = %d y = %d \n", z, x, y);
		p = palindrome(z);
		if (p != 0)
		{
			if (p > largest)
			{
				largest = p;
			}
		}
		}
	}
end:
printf("The Largest palindrome is %d\n", largest);
return 0;
}

//Function to check if the number is a palindrome
int palindrome(int z)
{
int  x, y = 0;
x = z;
//printf("2 z = %d x = %d y = %d \n", z, x, y);
while (x > 0)
{
	//printf("3 z = %d x = %d y = %d \n", z, x, y);	
	y = y * 10;
	y = (x % 10) + y;
	x = x / 10;
	//printf("4 z = %d x = %d y = %d \n", z, x, y);
}
if (z == y)
	{
	return z;	
	}
else
{
	return 0;
}
}




























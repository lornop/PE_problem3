/*The Fibonacci sequence is defined by the recurrence relation:

    Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.

Hence the first 12 terms will be:

    F1 = 1
    F2 = 1
    F3 = 2
    F4 = 3
    F5 = 5
    F6 = 8
    F7 = 13
    F8 = 21
    F9 = 34
    F10 = 55
    F11 = 89
    F12 = 144

The 12th term, F12, is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?

*/



#include <stdio.h>

void fibadd(int fib[][1000], int n);

int main()
{
int x, y, n, z = 0;
int max = 1000;
int fib[2002][1000];
int fibnum, count = 0;

// Init the Array
for (x = 0; x < 3; x++)
	{		
		for (y = 0; y < max; y++)
		{
			fib[x][y] = 0;
		}
	}
//****************


//Start of the the program
// Assign fib[0][0] as 0 and Assign fib[1][0] as 1 to get it started

fib[0][0] = 0;
fib[1][0] = 1;

for (count = 0; count < 10000; count++)
	{
	fibnum = (count * 2000);
	printf("Fibnum=%d\n", fibnum);
	for (n = 2; n < 2002; n++)
		{
			//printf("Fib Num %d\n", n);
			fibadd(fib, n);

			if (fib[n][999] != 0)
			{
				//printf("n = fib[n][999] = %d\n", fib[n][999]);
				goto end;
			}
				/*for (z = 0; z < 1000; z++)
					{
						printf("%d", fib[n][z]);
					}
				*///printf("\n");
		}
	for (z = 0; z < 1000; z++)
		{
		fib[2][z] = fib[2002][z];
		fib[1][z] = fib[2001][z];
		fib[0][z] = fib[2000][z];
		}
	}
end:

fibnum = n + (count * 2000);
printf("The first fibonacci sequence number to have 1000 digits is: %d\n", fibnum);

return 0;
}
//***************************************************




// The function to add the fibonacci numbers together
void fibadd(int fib[][1000], int n)
{
int max = 1000;

int x, y = 0;

int z = 0;

//printf("fibadd function init n = %d\n", n);

//make the new array all zeros

for (z = 0; z < 1000; z++)
	{
		fib[n][z] = 0;
	}


//Start
//printf("fibadd function start\n");
for (z = 0; z < 1000; z++)
	{
		fib[n][z] = fib[n-1][z] + fib[n-2][z];
	}
x = 0;
//printf("fibadd function addition\n");
for (z = 0; z < 1000; z++)
	{
		y = fib[n][z];
		y = y + x;
		x = 0;
		

		if (y >= 10)
		{
			x = y / 10;
			y = y % 10;
		}
		fib[n][z] = y;
	}
//for (z = 0; z < 1000; z++)
//{
	//printf("%d", fib[n][z]);
//}
//printf("\n");
}
//*********************


/*


If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, there are exactly three solutions for p = 120.

{20,48,52}, {24,45,51}, {30,40,50}

For which value of p ≤ 1000, is the number of solutions maximised?

*/


#include <stdio.h>

int squareroot(int c);

int main()
{

int sums[1000];
int a, b, c, z, p = 0;
int max = 1000;

for (a = 0; a < max; a++)
{
	sums[a] = 0;
}

for (a = 1; a <= max; a++)
{
	for (b = 1; b <= max; b++)
	{
		z = (a*a) + (b*b);
		c = squareroot(z);
		if ( c != 0)
		{
			p = a + b + c;
			if (p <= max)
			{
			sums[p]++;
			}
		}
	}
}
z = 0;
for (a = 0; a < max; a++)
{
	b = sums[a];
	if (b > z)
	{
		z = b;
		p = a;
	}
}
printf("The max solutions is %d for %d \n", z, p);
return 0;
}


int squareroot(int z)
{
int a, b, c = 0;

b = z / 2;
for (a = 1; a <= b; a++)
{
	if (a * a == z)
	{
		c = a;
		goto end;
	}
}
end:
return c;
}

	

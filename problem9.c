#include <stdio.h>
/* 

a + b + c = 1000
a^2 + b^2 = c^2
a < b < c

*/

int main()
{
long int a = 1; 
long int b = 2;
long int c = 3;
long int pythagorean = 1;
int sum = 1000;

start:
	if (b >= 998)
	{
		goto end;
	}
	b++;
	a = 1;
	while (a < b - 1)
	{
		a++;
		c = (sum - (a + b));
		if (a*a + b*b == c*c)
		{
			goto pythagoras;
		}
	}
	goto start;

pythagoras:
	pythagorean = a * b * c;
	printf("The numbers are %d, %d, %d, and the product is %d\n", a, b, c, pythagorean);
	goto final;

end:
	printf("It didnt work:a=%li, b=%li, c=%li, sum=%li, pythagorean=%li\n", a, b, c, sum, pythagorean);

final:
return 0;
}

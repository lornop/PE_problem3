/*
It is possible to write five as a sum in exactly six different ways:

4 + 1
3 + 2
3 + 1 + 1
2 + 2 + 1
2 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1

How many different ways can one hundred be written as a sum of at least two positive integers?
*/

#include <stdio.h>
int sum(int digits[], int x);
int add(int digits[], int x);

int main(){
int digits[102];
//digits 0 is the sum, digits 101 is the number of ways 
int n, x = 0;
//initialize the array
for (x = 0; x <= 101; x++)
{
	digits[x] = 0;
}

//Start The program
for (n = 1; n < 100; n++)
{
	digits[1] = n;
	x = 2;
	add(digits, x);
	printf("1=%d  total=%d\n", digits[1], digits[101]);
}


//Print the number of ways and end
printf("The number of ways is %d \n", digits[101]);
return 0;}

//The Function to add another digit
int add(int digits[], int x){
int y, n;
digits[x] = 0;
if (x > 100)
{
	goto done;
}

for (n = 1; n <= digits[x-1]; n++)
{
	sum(digits, x);
	//printf("x=%d n=%d sum=%d 1=%d \n", x, n, digits[0], digits[1]); 
	if (digits[0] + n == 100)
	{
		digits[101]++;
		//printf("x=%d n=%d sum=%d 1=%d  total=%d\n", x, n, digits[0], digits[1], digits[101]);
		goto done;
	}
	else 
	{
		if (digits[0] + n > 100)
		{
			goto done;
		}
		else
		{
			digits[x] = n;
			y = x + 1;
			add(digits, y);
		}
	}	
}
done:
return 0;}

//The function to sum all the values
int sum(int digits[], int x){
int y, sum = 0;

for (y = 1; y < x; y++)
{
	sum = sum + digits[y];
}
digits[0] = sum;
//printf("Sum = %d \n", digits[0]);
return 0;}

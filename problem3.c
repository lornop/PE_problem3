#include <stdio.h>
#include <math.h>
int main()
{
	
	long int mainnumber = 600851475143;
	//long int mainnumber = 54100900;
	int a = 0;	
	int b = 0;
	int c = 0;
	long int currentnumber = 0;	
	int factor = 0;
	int divisor = 0;
	long int largestprime = 0;
	int remainder = 0;
	long int check = 0;
	long int check2 = 0;
	long int primechecknum;

	check = round(mainnumber / 2);

start:
	//printf("start\n");	
	remainder = mainnumber%check;
	//printf("the remainder is %i\n", remainder);
	if (remainder == 0)
	{
		//printf("goto primecheck\n");
		goto primecheck;
	}
	check --;
	goto start;
	
	
	
primecheck:
	primechecknum = check;
	//printf("primechecknum %li\n", primechecknum);
	check2 = round(primechecknum / 2);

startprimecheck:
	//printf("startprimecheck\n");
	remainder = primechecknum%check2;
	if (remainder == 0)
	{ 
		check--;
		goto start;
	}
	
	if (check2 > 2)
	{
		check2--;
		goto startprimecheck;
	}
	
	if (check2 <= 1)	
	{	
		goto itsprime;
	}
itsprime:
	printf("The largest prime factor of %li\n is %li\n", mainnumber ,primechecknum); 
	return 0;
}

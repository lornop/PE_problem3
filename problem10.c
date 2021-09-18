#include <stdio.h>
int main()
{
int findthisnumberofprimes = 2000000;
int checknumber = 1;
long int count = 2;
int check1 =1;
int maxcheck;
int remainder;


start:
	checknumber = checknumber + 2;
	if (checknumber > findthisnumberofprimes)
	{
		goto end;
	}
	check1 = 2;
	maxcheck = checknumber / 2;
	
primecheckstart:
	remainder = checknumber % check1;
	if (remainder == 0)
		{
			goto start;
		}
	check1 = check1 + 1;
	if (check1 >= maxcheck)
		{
			goto itsprime;
		}
	goto primecheckstart;
	
itsprime:
	count = count + checknumber;
	if (checknumber <= findthisnumberofprimes)
		{
			goto start;
		}
	goto end;
end:
	printf ("The sum of all primes below %d is %li\n", findthisnumberofprimes, count);
return 0;
}

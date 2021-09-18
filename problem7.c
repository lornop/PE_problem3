#include <stdio.h>
int main()
{
int findthisnumberofprimes = 10001;
int checknumber = 1;
int count = 1;
int check1 =1;
int maxcheck;
int remainder;


start:
	checknumber = checknumber + 2;
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
	count ++;
	if (count < findthisnumberofprimes)
		{
			goto start;
		}
	printf ("the %dst prime number is %d\n", findthisnumberofprimes, checknumber);
return 0;
}

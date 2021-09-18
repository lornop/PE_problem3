#include <stdio.h>
int main()
{
	int number = 20;
	int dividend = 0;
	int test = 1;
	int a = 19;
	int remainder = 0;
		
start:

	a = 19;
	dividend = test * number;
	remainder = dividend % a;
	if (remainder == 0)
	{
		check:
		a--;
		if (a == 0)
		{
			goto end;
		}
		remainder = dividend % a;
		if (remainder == 0)
		{
			goto check;
		}
		goto checkend;
	}
checkend:	
	test ++;
	goto start;
	
		
end:
		printf("smallest number is %d\n", dividend);
		

	return 0;
}

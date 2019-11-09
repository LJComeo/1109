#include <iostream>
using namespace std;

int cnt = 0;
int fib(int n)
{
	cnt++;
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 2;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}


int test5()
{
	fib(5);
	printf("%d\n", cnt);

	return 0;
}
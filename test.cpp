#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

class A
{
public:
	A()
	{
		printf("0");
	}
	A(int a)
	{
		printf("1");
	}
	A& operator=(const A& a)
	{
		printf("2");
		return*this;
	}
};
int test1()
{
	A al;
	al = 10;
	return 0;
}
int test()
{

	/*
	int a[] = { 1, 2, 3, 4 };//3 2 2 4
	int *b = a;
	*b += 2;
	*(b + 2) = 2;
	b++;
	printf("%d,%d\n", *b, *(b + 2));*/

	/*
	char a[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' } , *p;
	int i;
	i = 8;
	p = a + i;
	printf("%s\n", p - 3);
	*/

	/*
	vector<int> v;
	v.push_back(100);
	v.push_back(300);
	v.push_back(300);
	v.push_back(300);
	v.push_back(300);
	v.push_back(500);
	vector<int>::iterator itor;
	for (itor = v.begin(); itor != v.end(); itor++)
	{
		if (*itor == 300)
		{
			itor = v.erase(itor);
		}
	}
	for (itor = v.begin(); itor != v.end(); itor++)
	{
		cout << *itor << "";
	}
	*/

	

	return 0;
	
}

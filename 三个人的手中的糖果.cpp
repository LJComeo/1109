#include <iostream>
#include <vector>
using namespace std;

void F(vector<int> v)
{
	int A, B, C, n, m;
	n = v[0] + v[1];//A-C
	m = v[0] + v[3];//A+C

	A = (m + n) / 2;//A
	B = v[2] - A;
	C = v[3] - B;
	if ((A - B == v[0]) && (B - C == v[1]) && (A + B == v[2]) && (B + C == v[3]))
	{
		cout << A << ' ' << B << ' ' << C << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	
}

int test3()
{
	int n[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		cin >> n[i];//A-B B-C A+B B+C 
		if ((n[i] < -30 || n[i] > 30))
		{
			break;
		}
	}
	vector<int> v(n,n+4);
	F(v);
	return 0;
}
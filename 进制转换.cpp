#include <iostream>
#include <stack>
#include <string>
using namespace std;

string Trans(int n, int m)
{
	char str[32] = {' '};
	stack<int> s;
	while (n)
	{
		s.push(n % m);
		n /= m;
	}
	int i = 0;
	while (!s.empty())
	{
		switch (s.top())
		{
		case 10:
			str[i++] = 'A';
			break;
		case 11:
			str[i++] = 'B';
			break;
		case 12:
			str[i++] = 'C';
			break;
		case 13:
			str[i++] = 'D';
			break;
		case 14:
			str[i++] = 'E';
			break;
		case 15:
			str[i++] = 'F';
			break;
		default:
			str[i++] = s.top() + '0';
		}
		s.pop();
	}
	string st = str;
	return st;
}

int main()
{
	string s1;
	int n, m;
	cin >> n >> m;
	s1 = Trans(n, m);
	cout << s1;

	return 0;
}
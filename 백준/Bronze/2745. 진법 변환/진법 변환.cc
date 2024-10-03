#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void solve(string n, int b)
{
	int len = n.length();
	long long sum = 0;

	for (int i = 0; i < len; i++)
	{
		char ch = n[i];
		int intoch;

		if (ch >= 'A' && ch <= 'Z')
		{
			intoch = ch - 'A' + 10;
		}
		else if (ch >= '0' && ch <= '9')
		{
			intoch = ch - '0';
		}

		if (intoch < b)
		{
			sum = sum * b + intoch;
		}

	}

	cout << sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string n;
	int b;

	cin >> n >> b;
	solve(n, b);

	return 0;
}
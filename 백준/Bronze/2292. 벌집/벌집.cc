#include <iostream>

using namespace std;

void solve(int n)
{
	int a = 1, b = 1, t = 0, k = 1;

	while (true)
	{
		if (n <= b)
		{
			break;
		}

		a = 6 * k;
		b += a;
		t++;
		k++;
	}

	cout << t + 1 << '\n';
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	solve(n);

	return 0;
}
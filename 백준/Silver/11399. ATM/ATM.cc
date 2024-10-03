#include <iostream>

using namespace std;

int p[1001] = { 0 };

void solve(int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	int temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (p[i] > p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += p[j];
		}
	}

	cout << sum;
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
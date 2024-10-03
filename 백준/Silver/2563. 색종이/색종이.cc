#include <iostream>

using namespace std;

bool white[100][100] = { 0 };
int y, x;
int res = 0;

void solve()
{
	cin >> y >> x;

	for (int j = y; j < y + 10; j++)
	{
		for (int k = x; k < x + 10; k++)
		{
			white[j][k] = 1;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		solve();
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (white[i][j] == 1)
			{
				res++;
			}
		}
	}

	cout << res;

	return 0;
}
#include <iostream>

using namespace std;

char ar[5][16] = { '\0' };

void solve()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (ar[j][i] != '\0')
			{
				cout << ar[j][i];
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 5; i++)
	{
		cin >> ar[i];
	}

	solve();

	return 0;
}
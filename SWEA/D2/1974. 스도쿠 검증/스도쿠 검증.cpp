#include <iostream>

using namespace std;

int arr[9][9];


void reset(int flag[9])
{
	for (int i = 0; i < 10; i++)
	{
		flag[i] = 0;
	}
}

bool solve()
{
	int flag[10] = { 0 };

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 9; i++) // ho
	{
		for (int j = 0; j < 9; j++)
		{
			flag[arr[i][j]]++;

			if (flag[arr[i][j]] >= 2)
			{
				return 0;
			}
		}

		reset(flag);
	}

	for (int i = 0; i < 9; i++) // ver
	{
		for (int j = 0; j < 9; j++)
		{
			flag[arr[j][i]]++;

			if (flag[arr[j][i]] >= 2)
			{
				return 0;
			}
		}

		reset(flag);
	}

	int a = 0;
	int b = 0;

	for (int k = 0; k < 3; k++)
	{
		for (int l = 0; l < 3; l++)
		{
			for (int i = a; i < a + 3; i++)
			{
				for (int j = b; j < b + 3; j++)
				{
					flag[arr[i][j]]++;

					if (flag[arr[i][j]] >= 2)
					{
						return 0;
					}
				}
			}

			reset(flag);
			b += 3;
		}

		b = 0;
		a += 3;
	}

	return 1;
}

int main()
{
	int t, i = 1;
	bool res = 0;

	cin >> t;

	while (t--)
	{
		res = solve();
		cout << "#" << i << " " << res << '\n';
		i++;
	}
}
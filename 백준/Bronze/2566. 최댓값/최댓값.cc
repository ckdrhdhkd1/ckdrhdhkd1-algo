#include <iostream>

using namespace std;

int ar[9][9] = { 0 };
int maxc = 0, ymax, xmax;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> ar[i][j];

			if (ar[i][j] > maxc)
			{
				maxc = ar[i][j];
				ymax = i;
				xmax = j;
			}
		}
	}

	cout << maxc << '\n' << ymax + 1<< " " << xmax + 1;

	return 0;
}
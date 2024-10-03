#include <iostream>

using namespace std;

int n, m;
int a[101][101] = { 0 };
int b[101][101] = { 0 };

void input(int ar[101][101])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ar[i][j];
		}
	}
}

void solve()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] + b[i][j] << " ";
		}

		cout << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	input(a);
	input(b);
	solve();

	return 0;
}
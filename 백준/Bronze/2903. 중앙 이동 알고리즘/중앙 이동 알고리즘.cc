#include <iostream>

using namespace std;

int n;

void solve(int n)
{
	int init = 2, side = 0;

	for (int i = 1; i <= n; i++)
	{
		init = init * 2 - 1;
	}
	
	for (int i = 1; i < init; i++)
	{
		side += i;
	}

	cout << init + side * 2;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> n;

	solve(n);
}
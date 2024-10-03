#include <iostream>

using namespace std;

void solve(int n)
{
	int t = 1, y = 1, x = 1, sum = 0;

	while (n > sum)
	{
		sum += t++;
	}
	
	t--;
	y = t;
	x = t;

	if (t % 2 == 0)
	{
		y = y - (sum - n);
		x = t - y + 1;
	}
	else
	{
		x = x - (sum - n);
		y = t - x + 1;
	}
	cout << y << "/" << x;
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
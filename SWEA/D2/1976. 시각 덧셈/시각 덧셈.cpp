#include <iostream>
#include <cmath>

using namespace std;



void solve(int i)
{
	int h1, m1, h2, m2;

	cin >> h1 >> m1 >> h2 >> m2;

	int h, m;

	h = h1 + h2;

	if (h > 12)
	{
		h -= 12;
	}

	m = m1 + m2;

	if (m > 59)
	{
		m -= 60;
		h++;
	}

	cout << "#" << i << " " << h << " " << m << '\n';
}

int main()
{
	int t, i = 1;

	cin >> t;

	while (t--)
	{
		solve(i);
		i++;
	}
}
#include <iostream>

using namespace std;

char tochar(int value)
{
	if (value < 10) 
	{
		return '0' + value;
	}
	else
	{
		return 'A' + (value - 10);
	}
}

void solve(int n, int b)
{
	int a = n;
	char res[100] = { 0 }, index = 0;

	while (a > 0)
	{
		res[index++] = tochar(a % b);
		a /= b;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		cout << res[i];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, b;
	cin >> n >> b;

	solve(n, b);
	return 0;
}
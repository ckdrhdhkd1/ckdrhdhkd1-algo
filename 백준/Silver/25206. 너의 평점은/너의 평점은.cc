#include <iostream>

using namespace std;

string name, grade;
float hakjum, sumhakjum = 0;
float cache, sumgrade = 0;

int main()
{
	for (int i = 0; i < 20; i++)
	{
		cin >> name >> hakjum >> grade;

		if (grade == "P")
		{
			continue;
		}

		sumhakjum += hakjum;

		if (grade[0] == 'A')
		{
			cache = 4.0;
		}
		else if (grade[0] == 'B')
		{
			cache = 3.0;
		}
		else if (grade[0] == 'C')
		{
			cache = 2.0;
		}
		else if (grade[0] == 'D')
		{
			cache = 1.0;
		}
		else if (grade == "F")
		{
			cache = 0.0;
		}

		if (grade[1] == '+')
		{
			cache += 0.5;
		}

		sumgrade += (hakjum * cache);
	}

	cout << sumgrade / sumhakjum;
	return 0;
}
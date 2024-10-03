#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dict[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string S;

	int pos;

	cin >> S;

	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			pos = S.find(dict[i]);
			
			if (pos == string::npos)
			{
				break;
			}

			S.replace(pos, dict[i].length(), "@");
		}
	}

	cout << S.length();

	return 0;
}
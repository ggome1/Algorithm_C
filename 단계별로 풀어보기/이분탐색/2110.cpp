#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> home;
int have;
int want_count;

int main(void)
{
	ios_base::sync_with_stdio(0);cin.tie(0);

	cin >> have >> want_count;
	for (int i = 0; i < have; i++)
	{
		int where;

		cin >> where;
		home.push_back(where);
	}

	sort(home.begin(), home.end());

	int min = 1;
	int max = home.back() - home.front();
	int ans = 0;
	while (min <= max)
	{
		int middle = (min + max) / 2;
		int install = 1;
		int start = home.at(0);

		for (int i = 1; i < have; i++)
		{
			int end = home.at(i);
			if (end - start >= middle)
			{
				install++;
				start = end;
			}
		}

		if (install >= want_count)
		{
			ans = middle;
			min = middle + 1;
		}
		else
			max = middle - 1;
	}
	cout << ans;
}
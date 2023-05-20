#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);cin.tie(0);

	int have;
	int want_len;
	vector<int> lens;

	cin >> have >> want_len;

	for (int i = 0; i < have; i++)
	{
		int num;

		cin >> num;
		lens.push_back(num);
	}

	sort(lens.begin(), lens.end());

	long long front = 0;
	long long back = lens.back() - 1;
	int ans = 0;

	while (front <= back)
	{
		long long middle = (front + back) / 2;
		long long sum = 0;

		for (int i = 0; i < have; i++)
		{
			if (lens.at(i) > middle)
				sum += lens.at(i) - middle;
		}

		if (sum >= want_len)
		{
			ans = middle;
			front = middle + 1;
		}
		else
			back = middle - 1;
	}
	cout << ans;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> lens;

int main(void)
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int have;
	int want;

	cin >> have >> want;
	for (int i = 0; i < have; i++)
	{
		int len;

		cin >> len;
		lens.push_back(len);
	}
	sort(lens.begin(), lens.end());

	long long front = 1;
	long long back = lens.back();
	int ans = 0;

	while(front <= back)
	{
		long long middle = (front + back) / 2;
		int count = 0;

		for (int i = 0; i < have; i++)
			count += lens.at(i) / middle;
		
		if (count >= want)
		{
			front = middle + 1;
			ans = middle;
		}
		else
			back = middle - 1;
	}
	cout << ans;
}
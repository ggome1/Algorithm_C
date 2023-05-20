#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nums;

int main(void)
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int count;
	
	cin >> count;
	for(int i = 0; i < count; i++)
	{
		int num;

		cin >> num;
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end());

	cin >> count;
	for(int i = 0; i < count; i++)
	{
		int num;

		cin >> num;
		bool isFound = binary_search(nums.begin(), nums.end(), num);
		if (isFound)
			cout << '1' << '\n';
		else
			cout << '0' << '\n';
	}
}


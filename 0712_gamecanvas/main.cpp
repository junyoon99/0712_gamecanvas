#include <iostream>
#include <vector>
#include <algorithm>

bool CheckDuplicate(std::vector<int>& nums) 
{
	sort(nums.begin(), nums.end());
	for (int i{}; i < nums.size(); i++) 
	{
		if (i + 1 >= nums.size()) break;
		if (nums[i] == nums[i + 1]) return true;
	}
	return false;
}

int main()
{
	std::vector<int> nums{1,2,3,1};
	std::cout << CheckDuplicate(nums);
}
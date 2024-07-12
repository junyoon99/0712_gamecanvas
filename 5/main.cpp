#include <iostream>
#include <vector>

using namespace std;

int sum_diff(const vector<int>& a, const vector<int>& b) 
{
	int a_sum{};
	int b_sum{};
	for (auto e : a) { a_sum += e; }
	for (auto e : b) { b_sum += e; }
	if (a_sum - b_sum < 0) { return b_sum - a_sum; }
	else return a_sum - b_sum;
}

int FindSmallestSplit(const vector<int>& v) 
{
	vector<int> a{};
	vector<int> b{v};
	int count{};
	int min_diff{sum_diff(a,b)};
	for (int i{}; i < v.size(); i++) 
	{
		if (min_diff > sum_diff(a, b)) 
		{
			count = i;
			min_diff = sum_diff(a, b);
		}
		a.push_back(b.front());
		b.erase(b.begin());
	}
	return count;
}

int main() 
{
	vector<int> v{ 2,1,0,3,4,-1,-2 };
	cout << FindSmallestSplit(v);
}
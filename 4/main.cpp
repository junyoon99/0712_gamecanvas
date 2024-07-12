#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GetQuestCompleteCount(vector< vector<int> >& quests) 
{
	int level{};
	int isclear{};

	sort(quests.begin(), quests.end());
	for (auto e : quests) 
	{
		if (level >= e[0]) 
		{
			level += e[1];
			isclear++;
		}
	}
	return isclear;
}

int main() 
{
	vector< vector<int> > quests = { {7, 4}, {2, 4}, {13, 5}, {0, 3}, {14, 10} };
	cout << GetQuestCompleteCount(quests);
}
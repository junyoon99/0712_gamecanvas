#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

bool IsAnagram(string s, string t) 
{
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if (s == t) return true;
	else return false;
}

int main() 
{
	cout << IsAnagram("anagram", "nagaram");
}
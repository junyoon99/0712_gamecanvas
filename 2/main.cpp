#include<iostream>
#include <queue>

using namespace std;

uint32_t ReverseBits(uint32_t n) 
{
	uint32_t a{32};
	uint32_t answer{};
	queue<int> binary{};

	while(a > 0)
	{
		if (n / pow(2, a - 1) >= 1) 
		{
			binary.push(1);
			n -= pow(2, a - 1);
		}
		else binary.push(0);
		--a;
	}
	while (!binary.empty()) 
	{
		if (binary.front()) answer += pow(2, a);
		++a;
		binary.pop();
	}
	return answer;
}

int main() 
{
	uint32_t n = 0b000000010100101000001111010011100;
	std::cout << ReverseBits(n);
}
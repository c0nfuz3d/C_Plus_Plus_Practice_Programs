#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>numbers;
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);
	numbers.push(4);
	numbers.push(5);
	while(!numbers.empty())
	{
		cout << " " << numbers.top();
		numbers.pop();
	}

	return 0;
}
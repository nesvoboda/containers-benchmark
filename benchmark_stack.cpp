#ifdef STD
# include <stack>
# define NS std
#else
# define NS ft
# include "tested_code/stack.hpp"
#endif

#include <iostream>
#include <string>
#include <cstdio>

// Read integer n, then push n values on stk
void insert(NS::stack<int> &stk)
{
	int input_numbers = 0;
	scanf("%d", &input_numbers);

	for (size_t i = 0; i < input_numbers; i++)
	{
		int value;

		scanf("%d", &value);
		stk.push(value);
		printf("Size: %lu, top: %d\n", stk.size(), stk.top());
	}
}

int main()
{
	NS::stack<int> stk;

	// Main operations
	insert(stk);

	// Copy construction and destruction
	{
		NS::stack<int> stk2(stk);
	}

	printf("Size: %lu\n", stk.size());
	while (stk.size() != 0)
	{
		printf("%d\n", stk.top());
		stk.pop();
	}
	return 0;
	
}
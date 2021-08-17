#ifdef STD
# include <vector>
# define NS std
#else
# define NS ft
# include "tested_code/vector.hpp"
#endif

#include <iostream>
#include <string>
#include <cstdio>

// Read integer n, then insert n values into vec
void insert(NS::vector<int> &vec)
{
	int input_numbers = 0;
	scanf("%d", &input_numbers);

	for (size_t i = 0; i < input_numbers; i++)
	{
		int value;

		scanf("%d", &value);
		vec.push_back(value);
		printf("Size: %lu, capacity: %lu\n", vec.size(), vec.capacity());
	}
}

// Read integer n, then delete n indexes from vec
void del(NS::vector<int> &vec)
{
	int input_numbers = 0;
	scanf("%d", &input_numbers);

	for (size_t i = 0; i < input_numbers; i++)
	{
		size_t index;
		scanf("%lu", &index);
		NS::vector<int>::iterator ret = vec.erase(vec.begin()+index);
		if (ret == vec.end())
			printf("end");
		else
			printf("%d\n", *ret);
	}
}

int main()
{
	NS::vector<int> vec;

	// Main operations
	insert(vec);
	del(vec);

	// Copy construction and destruction
	{
		NS::vector<int> vec2(vec);
	}

	printf("Size: %lu\n", vec.size());
	for (NS::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		printf("%d\n", *it);
	}
	return 0;
	
}
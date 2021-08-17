#include "tested_code/vector.hpp"
#include "tested_code/stack.hpp"

#ifdef STD
# include <map>
# define NS std
#else
# define NS ft
# include "tested_code/map.hpp"
#endif

#include <iostream>
#include <string>
#include <cstdio>

// Read integer n, then insert n space-separated key-value pairs into mp
void insert(NS::map<int, int> &mp)
{
	int input_numbers = 0;
	scanf("%d", &input_numbers);

	for (size_t i = 0; i < input_numbers; i++)
	{
		int key;
		int value;

		scanf("%d %d", &key, &value);
		const int c_key = key;
		NS::pair<NS::map<int, int>::iterator, bool> ret = mp.insert(NS::make_pair(c_key, value));
		printf("%d %d %d\n", ret.first->first, ret.first->second, ret.second);
	}
}

// Read integer n, then delete n keys from mp
void del(NS::map<int, int> &mp)
{
	int input_numbers = 0;
	scanf("%d", &input_numbers);

	for (size_t i = 0; i < input_numbers; i++)
	{
		int key;
		scanf("%d", &key);
		printf("%lu\n", mp.erase(key));
	}
}

// Read integer n, then search n keys in mp
void search(NS::map<int, int> &mp)
{
	int input_numbers = 0;
	scanf("%d", &input_numbers);

	for (size_t i = 0; i < input_numbers; i++)
	{
		int key;
		scanf("%d", &key);
		NS::map<int, int>::iterator ret = mp.find(key);
		if (ret == mp.end())
			printf("miss\n");
		else
			printf("hit\n");
	}
}

int main()
{
	NS::map<int, int> mp;

	// Main operations
	insert(mp);
	del(mp);
	search(mp);

	// Copy construction and destruction
	{
		NS::map<int, int> mp2(mp);
	}

	printf("Size: %lu\n", mp.size());
	for (NS::map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		printf("Key: %d, value: %d\n", it->first, it->second);
	}
	return 0;
	
}
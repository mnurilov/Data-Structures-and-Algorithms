#include <iostream>
#include <unordered_map>

bool check_permutation(std::string s1, std::string s2)
{
	if (s1.size() != s2.size()) return false;

	std::unordered_map<char, int> ht;

	for (int i = 0; i < s1.size(); i++)
	{
		if(ht.find(s1[i]) == ht.end())
		{
			ht[s1[i]]=1;
		}
		else
		{
			ht[s1[i]]++;
		}
	}	

	for (int i = 0; i < s2.size(); i++)
	{
		if(ht.find(s2[i]) != ht.end() && ht[s2[i]] > 0)
		{
			ht[s2[i]]--;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{

	std::cout << "abcdefg\t\tgfedcba\t" << check_permutation("abcdefg", "gfedcba") << std::endl;
	std::cout << "abcefg\t\tgfdcba\t" << check_permutation("abcefg", "gfdcba") << std::endl;
	std::cout << "cbISa\t\tSabcI\t" << check_permutation("cbISa", "SabcI") << std::endl;
	std::cout << "abs nice\t\tnice abs\t" << check_permutation("abs nice", "nice abs") << std::endl;

}


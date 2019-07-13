#include <iostream>

std::string compression(std::string s1)
{
	int count = 1, i = 1;

	std::string compressed_s1 = "";	

	for (;i < s1.size(); i++)
	{
		if (s1[i - 1] != s1[i])
		{
			compressed_s1 += s1[i - 1] + std::to_string(count);
			count = 1;
		}
		else
		{
			count++;
		}
	}	 

	compressed_s1 += s1[i - 1] + std::to_string(count);

	return compressed_s1.size() < s1.size() ? compressed_s1 : s1;
}

int main()
{
	std::string test1 = "aabcccccaaa";
	std::string test2 = "abc";
	std::string test3 = "aabeeeeddcccccaaa";
	std::string test4 = "abcBabbbbbbbbbbbbbyyyyyyyyy";
	std::string test5 = "AAAAaaaaAAAA";

	std::cout << test1 << " : " << compression(test1) << std::endl;
	std::cout << test2 << " : " << compression(test2) << std::endl;
	std::cout << test3 << " : " << compression(test3) << std::endl;	
	std::cout << test4 << " : " << compression(test4) << std::endl;
	std::cout << test5 << " : " << compression(test5) << std::endl;
}

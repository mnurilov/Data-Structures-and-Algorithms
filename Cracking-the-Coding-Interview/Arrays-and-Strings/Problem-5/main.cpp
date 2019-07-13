#include <iostream>

bool one_edit(std::string s1, std::string s2)
{
	int length_difference = abs(s1.size() - s2.size());

	if (length_difference > 1) return false;

	int errors = 0;

	int length = 0;
	if (s1.size() < s2.size()) length = s1.size();
	else 			   length = s2.size();

	int s1_index = 0;
	int s2_index = 0;

	for (int i = 0; i < length; i++)
	{
		if (s1[s1_index] != s2[s2_index])
		{
			errors++;
			if (errors > 1) return false;

			if (s1.size() > s2.size())
			{
				s1_index++;
				continue;
			}
			else if (s2.size() > s1.size())
			{
				s2_index++;
				continue;
			}
		}
		s1_index++;
		s2_index++;
	}
	
	return true;
}

int main()
{
	std::string test1 = "pale";
	std::string test2 = "ple";
	std::string test3 = "pales";
	std::string test4 = "pale";
	std::string test5 = "pale";
	std::string test6 = "bale";
	std::string test7 = "pale";
	std::string test8 = "bake";
	std::string test9 = "pale";
	std::string test10 = "paless";

	std::cout << test1 << " : " << test2 << "\t\t\t" << one_edit(test1, test2) << std::endl;
	std::cout << test3 << " : " << test4 << "\t\t\t" << one_edit(test3, test4) << std::endl;
	std::cout << test5 << " : " << test6 << "\t\t\t" << one_edit(test5, test6) << std::endl;
	std::cout << test7 << " : " << test8 << "\t\t\t" << one_edit(test7, test8) << std::endl;
	std::cout << test9 << " : " << test10 << "\t\t\t" << one_edit(test9, test10) << std::endl;
}

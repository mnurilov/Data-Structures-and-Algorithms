// Problem: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

#include <iostream>

bool string_checker(std::string s)
{
	bool bit_array[128] = { 0 };
	
	for(int i = 0; i < s.length(); i++)
	{
		int ascii_value = (int)s[i];

		if (bit_array[ascii_value] == true)
		{
			return false;
		}
		bit_array[ascii_value] = true;
	}	
	return true;
}

int main()
{
	std::string test_case_1 = "aple";
	std::string test_case_2 = "sAa";
	std::string test_case_3 = "sas";
	std::string test_case_4 = " ex ";

	std::cout << test_case_1 << "\t" << string_checker(test_case_1) << std::endl; 	
	std::cout << test_case_2 << "\t" << string_checker(test_case_2) << std::endl;
	std::cout << test_case_3 << "\t" << string_checker(test_case_3) << std::endl;
	std::cout << test_case_4 << "\t" << string_checker(test_case_4) << std::endl;
}

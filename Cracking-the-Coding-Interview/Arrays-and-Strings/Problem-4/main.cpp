#include <iostream>
#include <stdio.h>
#include <ctype.h>

bool permutation_of_palindrome(std::string s1)
{
	bool bit_array[26] = { false };
	int odd_letters = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == ' ')
		{
			continue;
		}

		s1[i] = tolower(s1[i]);
		bit_array[s1[i] - 'a'] = !bit_array[s1[i] - 'a'];
		
		if (bit_array[s1[i] - 'a'] == true)
		{
			odd_letters++;
		}
		else
		{
			odd_letters--;
		}
	}
	return odd_letters <= 1;
}

int main()
{
	std::string test1 = "Tact Coa";
	std::string test2 = "ivi CC";
	std::string test3 = "taco cat";
	std::string test4 = "civil";

	std::cout << test1 << "\t\t\t" << permutation_of_palindrome(test1) << std::endl;
	std::cout << test2 << "\t\t\t" << permutation_of_palindrome(test2) << std::endl;
	std::cout << test3 << "\t\t\t" << permutation_of_palindrome(test3) << std::endl;
	std::cout << test4 << "\t\t\t" << permutation_of_palindrome(test4) << std::endl;
}

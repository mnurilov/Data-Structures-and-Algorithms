#include <iostream>

void urlify(std::string &s1, int true_length)
{
	int index = s1.size();
	int spaces = (index - true_length) / 2;	

	for (int i = true_length - 1; i >= 0 && spaces > 0; i--)
	{
		if (s1[i] == ' ')
		{
			s1[index - 1] = '0';
			s1[index - 2] = '2';
			s1[index - 3] = '%';
			index-=3;
			spaces--;
		}
		else
		{
			s1[index - 1] = s1[i];
			index--;
		}
	}
}

int main()
{
	std::string test1 = "Mr John Smith    ";
	std::string test2 = "Ablo   ";
	std::string test3 = " Nver rk n      ";
	std::string test4 = "Michael Nurilov is the best        ";

	std::cout << test1 << "\t\t";
	urlify(test1, 13);
	std::cout << test1 << std::endl;

	std::cout << test2 << "\t\t";
	urlify(test2, 5);
	std::cout << test2 << std::endl;

	std::cout << test3 << "\t\t";
	urlify(test3, 10);
	std::cout << test3 << std::endl;

	std::cout << test4 << "\t\t";
	urlify(test4, 27);
	std::cout << test4 << std::endl;
}

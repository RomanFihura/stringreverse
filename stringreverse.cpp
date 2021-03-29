#include <iostream>
#include <string>
#include <algorithm>
int wordswap(std::string &);
int main()
{
	std::string str;
	std::cout << "Input your line: ";
	getline(std::cin, str);
	wordswap(str);
	std::cout << str << std::endl;
	return 0;
}
int wordswap(std::string &str)
{
	char delim = ' ';

	if (auto F=end(str) ==(std::find(begin(str), end(str), delim)))
	{
		return 0;
	}
	
	std::reverse(str.begin(), str.end());

	auto itFrom = begin(str);
	auto itTo = std::find(begin(str), end(str), delim);
	do
	{
		std::reverse(itFrom, itTo);
		itTo++;
		itFrom = itTo;
		itTo = std::find(itTo, end(str), delim);
	} while (itTo != end(str));
	std::reverse(itFrom, str.end());
	return 0;
}

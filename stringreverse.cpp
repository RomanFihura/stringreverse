#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::string str;
	char delim = ' ';

	std::cout << "Input your line: ";
	getline(std::cin, str);
	std::string space = " ";
	std::reverse(str.begin(), str.end());
	std::cout << str<<std::endl;

	//int numberofletter = 0;
	auto itFrom = begin(str);
	auto itTo = std::find(begin(str), end(str), delim);
	do
	{
		std::reverse(itFrom, itTo);
		itTo++;
		itFrom = itTo;
		itTo = std::find(itTo, end(str), delim);
		std::cout << str<<std::endl;
	}
	while(itTo != end(str));
	std::reverse(itFrom, str.end());
	std::cout << str << std::endl;
	return 0;
}

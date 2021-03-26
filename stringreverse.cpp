#include <vector>
#include <string>
#include <sstream>
#include <iostream>

int main()
{
	std::string str;
	getline(std::cin,str);

	std::string buf;                 // Have a buffer string
	std::stringstream ss(str);       // Insert the string into a stream
	std::vector<std::string> tokens; // Create vector to hold our words

	while (ss >> buf)
		tokens.push_back(buf);
	str.clear();
	std::reverse(tokens.begin(), tokens.end());
	for (int i = 0; i < tokens.size(); i++)
	{
		str += tokens[i];
		str += " ";
	}
	std::cout << str;
	return 0;
}

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdlib>
#include <assert.h>
#include <algorithm>
void reverse(std::string &name,int a,int b);
int main()
{
 std::string str , str2 = " ";
 std::cout << "Input your line: " ;
 getline(std::cin, str);
 str += str2;
 std::string space = " ";
 int numberofletter=0;
 int idx=0; //word end number
 for (; numberofletter != str.length();)
 {
  idx = str.find(" ", numberofletter);
  reverse(str, numberofletter, idx - 1);
  numberofletter = idx + 1;
 }
 str.erase(str.length()-1, 1);
 reverse(str,0, str.length()-1);
 std::cout << str << std::endl;
 return 0;
}
void reverse(std::string &name, int a, int b) //reverse func(your string, start element, last element)
{
 for (int i = a, j = b; i < j; i++, j--)
 {
  std::swap(name[i], name[j]);
 }
}
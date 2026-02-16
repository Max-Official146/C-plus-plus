#include <iostream>
/*
The upper statement is include 3rd party library
use that is iostream to use the below std::cout statement
*/
consteval int get_value()
{
  return 3;
}

int main()
{
  std::cout << "Hello world!" << std::endl;
  return 0;
}
/*int main is the main function of this file*/
/* Three types of errors are present
  1. compile Time Errors
  2. Runtime Errors
  3. Warnings
*/
#include <iostream>

int main()
{
  // Compile time error
  std::cout << "Hello world" << std::endl;

  // Run time error
  int value = 7 / 0;
  std::cout << "Value is: " << value << std::endl;
  return 0;
}
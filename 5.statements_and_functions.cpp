/*
- A statement is a basic unit of computation in a C++
  program
- Every C++ program is a collection of statements
  organised in a certain way to achieve some goal
- Statements end with a semicolon in C++
*/
#include <iostream>

int addNumbers(int first_number, int second_number)
{
  int sum = first_number + second_number;
  return sum;
}

int main()
{
  int firstNumber = 12;
  int secondNumber = 9;
  int sum = firstNumber + secondNumber;

  std::cout << "The sum of two number is : " << sum << std::endl;
  std::cout << addNumbers(firstNumber, secondNumber);
  return 0;
}
/*
- Statements are executed in order from top to bottom
  when the program is run
- Execution keeps going until there is a statement causing
  the program to terminate, or run another sequence of
  statements
*/

/*
Function:
  firstNumber and secondNumber is input function
  sum is output function

*/
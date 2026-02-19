#include <iostream>

int main(){
  // Printing data
  std::cout << "Helo, World!" << std::endl;

  std::cout << "The number is : " << 12 << std::endl;

  int age {21};
  std::cout << "The age is : " << age << std::endl;

  std::cerr << "std::cerr output : Something went wrong" << std::endl;

  std::clog << "std::clog output : This is log message " << std::endl;
  //Reading data in
  int age1;
  std::string name;

  std::cout << "Please type in your Last Name : " << std::endl;
  std::cin >> name;

  std::cout << "Please type in your age : " << std::endl;
  std::cin >> age1;

  std::cout << "Hello " << name << " !You are " << age << " years old " << std::endl;

  return 0;
}

/*
Some functions related to input or output functions 
1. std::cout => Printing data to the console(terminal)
2. std::cin => Reading data from the terminal
3. std::cerr => Printing errors to the console
4. std::clog => Printing log message to the console
*/
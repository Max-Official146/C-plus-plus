#include <iostream>

int calculate(int x, int y){
  int multi = x*y;
  return multi;
}
int main(){
  int a {10};
  int b {27};
  std::cout << calculate(a, b) << std::endl;
}

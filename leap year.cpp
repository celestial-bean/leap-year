#include <iostream>

int main() {
  int year;
  std::cout<<"Enter a year: ";
  std::cin >> year;

  if (year % 4 == 0 && year % 100 !=0){
    std::cout << "That year is a leap year.\n\n";
  }
  else{
    std::cout << "That year is not a leap year.\n\n";
  }
 system("PAUSE");
 
}

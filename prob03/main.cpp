// Random Rectangle

#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
  // Set randomizer seed
  unsigned seed = time(0);
  srand(seed);

  // Maximum addend allowed for the length of the rectangle
  const int MAX_ADDEND = 40;

  std::string length;
  int s;
  s = rand() % (MAX_ADDEND + 1);
  length.assign(s, '#');

  std::cout << length << std::endl;
  std::cout << length << std::endl;
  std::cout << length << std::endl;
}

#include <iostream>
#include <iomanip>

#define TYPESTR(type) "sizeof(" #type "): "
#define SIZEOF(type) std::cout << std::setw(25) << std::left << TYPESTR(type) << sizeof(type) << std::endl;

int main()
{
  SIZEOF(char);
  SIZEOF(short);
  SIZEOF(int);
  SIZEOF(long);
  SIZEOF(float);
  SIZEOF(double);
  SIZEOF(long long);
  SIZEOF(long double);
  return 0;
}

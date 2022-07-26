#include <iostream>

using namespace std;

int main()
{
  int age = 0;
  age = 17;
  const char letter = 'A';
  int age_list[] = {
      17,
      17,
      18,
      16,
  };
  age_list[1] = 16;
  cout << age << endl
       << letter << endl
       << age_list[1] << endl;
}
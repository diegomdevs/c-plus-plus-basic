#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    const int16_t sum = a + b;
    const int16_t sub = a - b;
    const int16_t ages[3] = {17, 16, 16};
    cout << "The result of the sum is: " << sum << endl;
    cout << "The result of the subtract is: " << sub << endl;
    cout << "length of the array is: " << sizeof(ages) / sizeof(ages[2]) << endl;
    return 0;
}

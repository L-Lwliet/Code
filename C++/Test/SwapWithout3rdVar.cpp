#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << " and b = " << b << endl;
    a = a + b; // 30
    b = a - b; // 10
    a = a - b; // 20
    cout << "a = " << a << " and b = " << b;

    return 0;
}
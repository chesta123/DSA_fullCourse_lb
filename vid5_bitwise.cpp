#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    int b = 1;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~b) << endl;
    cout << (a ^ b) << endl;
}

// bitwise operators work on bits so first convert a and b in 0 and 1 and then add them accordingly.//
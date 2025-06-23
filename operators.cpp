#include <iostream>

using namespace std;

int main()
{
    int age = 35;
    bool isEligible = age > 18;

    cout << boolalpha << isEligible;

    return 0;
}
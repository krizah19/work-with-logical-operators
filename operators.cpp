#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    int salary = 50000;
    bool isEligible = (age > 18 && age < 65) && (salary > 30000);

    cout << boolalpha << !isEligible;

    return 0;
}
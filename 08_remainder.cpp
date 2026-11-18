C++

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, remainder;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num2 != 0)
    {
        remainder = num1 % num2;
        cout << "Remainder = " << remainder << endl;
    }
    else
    {
        cout << "Remainder is not possible.";
    }

    return 0;
}

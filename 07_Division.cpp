C++

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num2 == 0)
    {
        cout << "Division by zero is not possible.";
    }
    else
    {
        result = num1 / num2;
        cout << "Division = " << result;
    }

    return 0;
}

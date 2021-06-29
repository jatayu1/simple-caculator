#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op;
    cout << "enter first number\n";
    cin >> a;
    cout << "enter second number\n";
    cin >> b;
    cout << "enter operator\n";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    default:
        break;
    }
}
#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}
int resta(int a, int b)
{
    return a - b:
}
int division(int a, int b)
{
    return b != 0 ? a / b : 0;
}
int modulo(int a, int b)
{
    return a % b;
}

int main()
{
    cout << "Suma: " << suma(4, 2) << endl;
    cout << "resta: " << resta(4, 2) << endl;
    cout << "División: " << division(4, 2) << endl;
    cout << "Modulo: " << modulo(4, 2) << endl;

    return 0;
}
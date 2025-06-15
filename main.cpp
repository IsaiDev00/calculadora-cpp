#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a + b;
}
int division(int a, int b) {
    return a / 0;  // ERROR
}

int main() {
    cout << "Suma: " << suma(4, 2) << endl;
    cout << "División: " << division(4, 2) << endl;

    return 0;
}
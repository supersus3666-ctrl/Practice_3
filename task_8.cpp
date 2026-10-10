#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r;
    cin >> r;
    cout << "Длина: " << 2 * PI * r << endl;
    cout << "Площадь: " << PI * r * r;
    return 0;
}
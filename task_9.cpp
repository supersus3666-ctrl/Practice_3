
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = (n / 100) % 10;
    int d4 = n / 1000;

    int sum = d1 + d2 + d3 + d4;
    int prod = d1 * d2 * d3 * d4;

    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << prod;
    return 0;
}
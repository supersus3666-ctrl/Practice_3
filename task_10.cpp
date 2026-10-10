#include <iostream>
using namespace std;

int main() {
    const double TAX = 0.13;
    double rate, hours, bonus;
    cin >> rate >> hours >> bonus;

    double начислено = rate * hours + bonus;
    double налог = начислено * TAX;
    double на_руки = начислено - налог;

    cout << "Начислено: " << начислено << endl;
    cout << "Налог: " << налог << endl;
    cout << "На руки: " << на_руки;
    return 0;
}
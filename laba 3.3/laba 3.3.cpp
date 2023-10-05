// Lab_03_3.cpp
// < Іванів Олександр Андрійович >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.9
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, R;
    cout << "R= "; cin >> R;
    cout << "x= "; cin >> x;

    // розгалуження в повній формі
    if (x < -7)
        y = 0;
    else if ((-7 <= x) && (x < -3))
        y = x + 3;
    else if ((-3 <= x) && (x < -2))
        y = 4;
    else if ((-2 <= x) && (x < 2))
        y = pow(x, 2);
    else if ((2 <= x) && (x < 4))
        y = -2 * x + 8;
    else
        y = 0;

    cout << endl;
    cout << y << endl;

    cin.get();
    return 0;
}
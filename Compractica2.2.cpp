#include <iostream>
#include <cmath>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string type; // тип роботи 
    double x, y, P, S; // y - нарахована сума; P - податок; S - сума до видачі

    cout << "x = ";
    cin >> x;
    cout << "Введіть тип роботи (А,Б,В)"; 
    cin >> type; 
    
    if (type == 'А' || type == 'а' || type == 'A' || type == 'a' )
    {
        y = 100 * abs(abs(sin(x) / 3.124 - cos(pow(x, 2))) - 8.3 * sin(3 * x) + 50);
        P = y * 0.10;
        S = y - P;
    }
    else if (type == 'B' || type == 'b' || type == 'Б' || type == 'б')
    {
        y = 150 * abs(abs(cos(2 * x)) / (1.12 - cos(3 * x - 2)) + 6.15 + 100);
        P = y * 0.15;
        S = y - P;
    }
    else if (type == 'C' || type == 'c' || type == 'В' || type == 'в')
    {
        y = 100 * abs(sin(x) * pow(cos(x), 2) * sin(x + 1.4) / 0.85 + 7.14 + 135);
        P = y * 0.20;
        S = y - P;
    }
    else
    {
        cout << "Некоректний тип роботи";
            return 1;
    }
    cout << "y = " << y;
    cout << "P = " << P;
    cout << "S = " << S;

    return 0;
}
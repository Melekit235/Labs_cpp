// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "Ru");
    bool flag = false;
    double a;
    double b;
    double h;
    while (flag == false)
    {
        cout << ("Введите a "); cin >> a;
        cout << ("Введите b "); cin >> b;
        cout << ("Введите h "); cin >> h;
        if (((a < b) && ( h > 0))||((a > b) && (h < 0)))
        {
            flag = true;
        }
    }
    double x = a;
    while ((x < (b-0.00001)) || (x > (b + 0.00001)))
    {
        if ((x > -exp(log(1.37 * 1.37 * 1.37) / 5)) and (x != 0))
        {
            double y;
            y = abs((x * x * x)-1/sqrt(3)-log(1.37*1.37*1.37+x*x*x*x*x)+4/x);
            cout << x << ' ' << y << '\n';
            x += h;
            if ((x < 0.00001) && (x > -0.00001))
            {
                x = 0;
            }
        }
        else
        {
            cout << x << " y doesn't exist" << '\n';
            x += h;
            if ((x < 0.00001) && (x > -0.00001))
            {
                x = 0;
            }
        }
    }
    x = b;
    if ((x > -exp(log(1.37 * 1.37 * 1.37) / 5)) and (x != 0))
    {
        double y;
        y = abs((x * x * x) - 1 / sqrt(3) - log(1.37 * 1.37 * 1.37 + x * x * x * x * x) + 4 / x);
        cout << x << ' ' << y << '\n';
    }
}
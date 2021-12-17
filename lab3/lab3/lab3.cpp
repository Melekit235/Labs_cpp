#include <iostream>

using std::cout;

int main()
{
	double x = -0.6;
	while (x <= 0.35)
	{
		double f1 = (x * x * x / 12) + (1 / 16) * (x * x * x * x - 1) * (log((1 + x) / (1 - x)) - 2 * atan(x));
		cout << x << f1:5 << '\n';
		x += 0.05;
		if (abs(x)<0.0001)
			x = 0;

	}
}
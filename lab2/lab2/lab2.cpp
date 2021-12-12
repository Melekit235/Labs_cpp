#include <iostream>
#include <math.h>

#define pi 3.14159265
#define e 2,7182818284

using std::cin;
using std::cout;

double fv2=0;

int main()
{
	for (double x = 0.6; x <= 1.1; x+=0.25)
	{
		double fv1 = sqrt(pi / 2 + x);
		for (int n = 1; n <= 15; n++)
		{
			if (n-x>0)
			{
				fv2 = fv2 + (exp(1) / (pow(n, 2) + x) * exp(log(n - x) / 3));
			}
			else
			{
				fv2 = fv2 - (exp(1) / (pow(n, 2) + x) * exp(log(x - n) / 3));;
			}
			if (n>9)
			{
				cout << "x=" << x << " n=" << n << " f=" << fv1*fv2 << '\n';
			}
		}
		fv2 = 0;
	}
}
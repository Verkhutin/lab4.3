#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double x, x2, dx, a, b, c, F;
	
	cout << "x = "; cin >> x;
	cout << "x2 = "; cin >> x2;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "---------------------------" << endl;


	for (x; x <= x2; x += dx) {
		if (a < 0 && c != 0)
			F = a * x * x + b * x + c;
		else
			if (a > 0 && c == 0)
				F = (-a) / (x - c);
			else
				F = a*(x + c);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << F
			<< " |" << endl;
	}
	cout << "---------------------------" << endl;
	cin.get();
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

double D(int a, int b, int c);
int a, b, c;
double x1, x2;

int main() {
	cout << "Enter the a" << endl;
	cin >> a;
	cout << "Enter the b" << endl;
	cin >> b;
	cout << "Enter the c" << endl;
	cin >> c;
	x1 = ((-1)*b + sqrt(D(a, b, c))) / 2 * a;
	x2 = ((-1)*b - sqrt(D(a, b, c))) / 2 * a;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cin.get();
	cin.get();
	return 0;
}

double D(int a, int b, int c){
	double D;
	D = b * b - 4 * a*c;
	return D;
}

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	cout << "Main function" << "\n";
	int a = 5;
	int b = 4;
	int s, r, u, q;
	float d, p;
	s = a + b;
	r = a - b;
	u = a * b;
	d = a / b;
	p = a % b;
	cout << s << "\n";
	cout << r << "\n";
	cout << u << "\n";
	cout << d << "\n";
	cout << p << "\n";
	cout << "Put the data between 1 to 5" << "\n";
	cin >> q;
	switch (q)
	{
	case 1: cout << "a = 1" << "\n";
		break;
	case 2: cout << "a = 2" << "\n";
		break;
	case 3: cout << "a = 3" << "\n";
		break;
	case 4: cout << "a = 4" << "\n";
		break;
	case 5: cout << "a = 5" << "\n";
		break;
	default: cout << "try again, wrong data" << "\n";
		break;
	}
	return 0;
}


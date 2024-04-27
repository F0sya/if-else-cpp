#include <iostream>
using namespace std;

int main() {
	int x; cout << "Your number:"; cin >> x;
	if (x / 1000 < 1 || x / 1000 > 9) {
		cout << "Your number need to be 4-digit!";
		return 0;
	}
	int x1 = (x / 100) % 100;
	int x2 = x % 100; 
	cout << x1 % 10 << (x1 / 10) % 10 << x2 % 10 << (x2 / 10) % 10 << endl;
}
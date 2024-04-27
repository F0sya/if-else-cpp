#include <iostream>
using namespace std;

int main() {
	int x; cout << "Your number:"; cin >> x;
	(x == 0) ? cout << "Your number is zero(not even or odd)" : (x % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;
}
#include <iostream>
using namespace std;

int main() {
	int x; cout << "Your number:"; cin >> x;
	(x == 0) ? cout << "Your number is zero" : (x > 0) ? cout << "Positive integer" << endl : cout << "Negative integer" << endl;
}
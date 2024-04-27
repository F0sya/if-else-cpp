#include <iostream>
using namespace std;

int main() {
	int sum_x1 = 0;
	int sum_x2 = 0;
	int x; cout << "Your number:"; cin >> x;
	if (x / 100000 < 1 || x / 100000 > 9) {
		cout << "Your number need to be 6-digit!" << endl;
		return 0;
	}
	int x1 = x / 1000;
	int x2 = x % 1000;
	while (x1 > 0) {
		int i = x1 % 10;
		sum_x1 += i;
		x1 /= 10;
	}
	while (x2 > 0) {
		int i = x2 % 10;
		sum_x2 += i;
		x2 /= 10;
	}
	(sum_x1 == sum_x2) ? cout << "Lucky ticket! :)" << endl : cout << "Unlucky ticket! :(" << endl;
}
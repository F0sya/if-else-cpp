#include <iostream>
using namespace std;

int main() {
	int x; cout << "Your number:"; cin >> x;
	if (x / 100000 < 1 || x / 100000 > 9) {
		cout << "Your number need to be 6-digit!" << endl;
		return 0;
	}
	int x1 = x / 1000;
	int x2 = x % 1000;

	int sum_x1 = (x1 % 10) + ((x1 / 10) % 10) + ((x1 / 100) % 10);
	int sum_x2 = (x2 % 10) + ((x2 / 10) % 10) + ((x2 / 100) % 10);



	(sum_x1 == sum_x2) ? cout << "Lucky ticket! :)" << endl : cout << "Unlucky ticket! :(" << endl;
}
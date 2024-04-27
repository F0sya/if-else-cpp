#include <iostream>
#include <string>
using namespace std;

int main() {
	int sum_x1 = 0;
	int sum_x2 = 0;
	string x; cout << "Your number:"; cin >> x;
	if (x.length() != 6) {
		cout << "Your number need to be 6-digit!" << endl;
		return 0;
	}
	string x1 = x.substr(0, 3);
	string x2 = x.substr(3, 3);
	for (char ch : x1) {
		sum_x1 += ch - '0';
	}
	for (char ch : x2) {
		sum_x2 += ch - '0';
	}
	(sum_x1 == sum_x2) ? cout << "Lucky ticket! :)" << endl : cout << "Unlucky ticket! :(" << endl;
}
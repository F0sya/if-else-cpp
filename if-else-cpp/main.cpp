#include <iostream>
using namespace std;

int main() {
	int max_num;
	int x1; cout << "First num: "; cin >> x1;
	max_num = x1;
	int x2; cout << "Second num: "; cin >> x2;
	(x2 > max_num) ? max_num = x2 : false;
	int x3; cout << "Third num: "; cin >> x3;
	(x3 > max_num) ? max_num = x3 : false;
	int x4; cout << "Fourth num: "; cin >> x4;
	(x4 > max_num) ? max_num = x4 : false;
	int x5; cout << "Fifth num: "; cin >> x5;
	(x5 > max_num) ? max_num = x5 : false;
	int x6; cout << "Sixth num: "; cin >> x6;
	(x6 > max_num) ? max_num = x6 : false;
	int x7; cout << "Seventh num: "; cin >> x7;
	(x7 > max_num) ? max_num = x7 : false;
	cout << "The maximum number is " << max_num << endl;
	return 0;
}
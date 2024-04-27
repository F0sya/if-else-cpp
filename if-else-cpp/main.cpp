#include <iostream>
using namespace std;

int main() {
	int first_num; cout << "First num:"; cin >> first_num;
	int second_num; cout << "Second num:"; cin >> second_num;
	(first_num > second_num) ? cout << "Result:" << second_num << endl : cout << "Result:" << first_num << endl;
}
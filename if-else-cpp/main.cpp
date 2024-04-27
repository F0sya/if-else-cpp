#include <iostream>
using namespace std;

int main() {
	int first_num; cout << "First num:"; cin >> first_num;
	int second_num; cout << "Second num:"; cin >> second_num;
	(first_num == second_num) ? cout << "Equal" << endl : (first_num > second_num) ? cout << second_num << " " << first_num << endl : cout << first_num << " " << second_num << endl;
}
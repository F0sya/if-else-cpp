#include <iostream>
using namespace std;

int main() {
	int fuel_tank = 300;
	int fuel_consumption, weight; cout << "Enter a weight: "; cin >> weight;
	int A_to_B; cout << "Distance from A to B:"; cin >> A_to_B;
	int B_to_C; cout << "Distance from B to C:"; cin >> B_to_C;
	// weight check
	if (weight > 2000) {
		cout << "Plane can't lift more than 2000kg!" << endl;
		return 0;
	}
	else if (weight > 1500 && weight < 2000) {
		fuel_consumption = 9;
	}
	else if (weight > 1000 && weight < 1500) {
		fuel_consumption = 7;
	}
	else if (weight > 500 && weight < 1000) {
		fuel_consumption = 4;
	}
	else if (weight > 0 && weight < 500) {
		fuel_consumption = 1;
	}
	else {
		cout << "Wrong weight input!" << endl;
		return 0;
	}
	int fuel_A_to_B = fuel_consumption * A_to_B;
	int fuel_B_to_C = fuel_consumption * B_to_C;
	// fuel check
	if (fuel_A_to_B > fuel_tank || fuel_B_to_C > fuel_tank) {
		cout << "You can't make this flight!" << endl;
		return 0;
	}
	int replenish = fuel_tank - (fuel_A_to_B + fuel_B_to_C); cout << replenish << endl;
	// replenish check
	if (replenish >= 0) {
		cout << "You don't need to replenish your fuel" << endl;
	}
	else if (replenish < 0) {
		cout << "You need to replenish: " << abs(replenish) << " Litres" << endl;
	}
	
}
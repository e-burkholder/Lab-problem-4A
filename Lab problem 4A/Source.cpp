#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double taxRate, taxPrice, subTotal;
	taxRate = 0.065;
	cout << "Enter subtotal price: $";
	cin >> subTotal;

	taxPrice = subTotal * taxRate;

	cout << "Your total tax is: $" << fixed << setprecision(2) << taxPrice;
	return 0;
}
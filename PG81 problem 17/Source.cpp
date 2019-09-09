// problem 17 :"stock commission".
#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
	int shares;
	float price;
	const float commission = .02;
	float totalPrice;
	float totalcommission;
	float total;

	cout << "How many shares did you buy?\n";
	cin >> shares;
	cout << "What was the price per shaare?\n";
	cin >> price;
	totalPrice = shares * price;
	totalcommission = totalPrice * commission;
	total = totalPrice + totalcommission;
	cout << fixed << setprecision(2);
	cout << "The total for the shares is $" << totalPrice << endl;
	cout << "The total for the commission is $" << totalcommission << endl;
	cout << "The final total is $" << total << endl;











	system("PAUSE");
	return 0;
}
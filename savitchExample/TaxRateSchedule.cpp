#include <iostream>
using namespace std;
//Determines taxed amount based on net income amount.
int main()
{
	int incomeRange;
	cout << "What is your net income?" << endl;

	cin >> incomeRange;

	if (incomeRange <= 15000)
		incomeRange = incomeRange * 0;
	else if ((incomeRange >= 15000) && (incomeRange <= 25000))
		incomeRange = incomeRange * 0.05;
	if (incomeRange > 25000)
		incomeRange = incomeRange * 0.10;

	cout << incomeRange << endl;

	system("pause");
	return 0;
}

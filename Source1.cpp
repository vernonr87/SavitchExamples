#include iostream

using std::cout; using std; endl;

int main()
{
	int incomeRange
	cout << "Enter your net income: ";
	cin >> incomeRange;

	if (incomeRange <= 15000)
		incomeRange = incomeRange * 0;
	else if ((incomeRange >= 15000) && (incomeRange <= 25000))
		incomerange = incomerange * 0.05;
	if (incomeRange > 25000)
		incomeRange = incomeRange * 0.10;

	cout << incomeRange;
	return 0;
}
#include <iostream>
using namespace std;

void sum(int n, int& sum1) {
	if (n < 1)
	{
		return;
	}
	sum1 += n;
	n -= 1;
	sum(n, sum1);
}

int main()
{
	int n;
	cin >> n;
	int sum1 = 0;
	sum(n, sum1);
	cout << "the sum of natural numbers upto " << n << " is " << sum1 << endl;
	
	return 0;
}
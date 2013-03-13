#include <iostream>
using namespace std;

void watermelon(int weight)
{
	if(weight == 2 || weight % 2 == 1)
		cout << "NO" << endl;
	else if(weight % 2 == 0)
		cout << "YES" << endl;
}

int main()
{
	int weight;
	cin >> weight;
	watermelon(weight);
	return 0;
}

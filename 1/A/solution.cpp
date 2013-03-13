#include <iostream>
using namespace std;

long long int theatreSquare(int n,int m,int a)
{
	long long int row,col;
	if(n%a == 0)
		row = n/a;
	else
		row = (n/a)+1;
	if(m%a == 0)
		col = m/a;
	else
		col = (m/a)+1;
	return row*col;
}

int main()
{
	int n,m,a;
	cin >> n;
	cin >> m;
	cin >> a;
	cout << theatreSquare(n,m,a) << endl;
	return 0;
}

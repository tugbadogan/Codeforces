#include <iostream>
using namespace std;

int nextRound(int size, int k, int ar[])
{
	int count=0;
	for(int i= 0; i<size; i++)
	{
		if(ar[i] >= ar[k-1]&& ar[i] > 0)
			count++;
	}
	return count;
}

int main()
{
	int size,k;
	cin >> size;
	cin >> k;
	int ar[size];
	for(int i=0; i<size; i++)
	{
		cin >> ar[i];
	}
	cout << nextRound(size,k,ar);
	return 0;
}

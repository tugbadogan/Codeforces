#include <iostream>
using namespace std;

int main()
{
	int number,count=0;
	cin >> number;
	
	char ar[number];
	
	for(int i=0; i<number; i++)
	{
		cin >> ar[i];
	}
	
	int size = number;
	
	for(int i=0; i<size-1; i++)
	{
		if(ar[i]==ar[i+1])
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

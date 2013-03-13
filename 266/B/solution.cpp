#include <iostream>
using namespace std;

int main()
{
	int number, time;
	cin >> number >> time;
	
	char ar[number];
	
	for(int i=0; i<number; i++)
	{
		cin >> ar[i];
	}
	
	for(int i=0; i<time; i++)
	{
		for(int j=0; j<number-1; j++)
		{
			if(ar[j] == 'B' && ar[j+1] == 'G')
			{
				ar[j] = 'G';
				ar[j+1] = 'B';
				j++;
			}
		}
	}
	
	for(int i=0; i<number; i++)
	{
		cout << ar[i];
	}
	return 0;
}

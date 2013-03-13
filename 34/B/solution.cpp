#include <iostream>
#include <vector>
using namespace std;

vector<int>sortedList;

void add(int n)
{
	vector<int>::iterator it;
	
	if(sortedList.empty())
	{
		sortedList.push_back(n);
	}
	else
	{
		for(it = sortedList.begin(); n<*it && it!=sortedList.end(); it++);
		sortedList.insert(it,1,n);
	}
}

int main()
{
	int set,carry,price,earn=0;
	cin >> set >> carry;
	
	for(int i=0; i<set; i++)
	{
		cin >> price;
		add(price);
	}
	
	
	for(int i=0; i<carry; i++)
	{
		if(sortedList.back()<0)
		{
			earn += sortedList.back();
			sortedList.pop_back();
		}
	}
	earn = 0-earn;
	cout << earn << endl;
}

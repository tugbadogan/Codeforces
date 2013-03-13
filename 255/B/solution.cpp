#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int countx=0,county=0;
	
	for(int i=0; i<s.length(); i++)
	{
		if(s.at(i)=='x')
			countx++;
		if(s.at(i)=='y')
			county++;
	}
	
	if(countx>county)
	{
		for(int i=0; i<countx-county; i++)
		{
			cout << "x";
		}
	}
	else if(county>countx)
	{
		for(int i=0; i<county-countx; i++)
		{
			cout << "y";
		}
	}
	else
		cout << "";
	
	return 0;
}

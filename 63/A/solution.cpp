#include <iostream>
#include <string>
using namespace std;

string ar[100][2];
int number;
string s;
void read()
{
	cin >> number;
	for(int i=0; i<number; i++)
	{
		cin >> s;
		ar[i][0] = s;
		cin >> s;
		ar[i][1] = s;
	}
}

void SinkingShip()
{
	read();
	for(int i=0; i<number; i++)
	{
		if(ar[i][1] == "rat")
			cout << ar[i][0] << endl;
	}
	
	for(int i=0; i<number; i++)
	{
		if(ar[i][1] == "woman" || ar[i][1] == "child")
			cout << ar[i][0] << endl;
	}
	
	for(int i=0; i<number; i++)
	{
		if(ar[i][1] == "man")
			cout << ar[i][0] << endl;
	}
	
	for(int i=0; i<number; i++)
	{
		if(ar[i][1] == "captain")
			cout << ar[i][0] << endl;
	}
}

int main()
{
	SinkingShip();
	return 0;
}

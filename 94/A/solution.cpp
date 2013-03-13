#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{	
	string code,s,subs,tmp,result="";
	int index=0;
	map<string,int>ar;
	
	cin >> code;
	
	for(int i=0; i<10; i++)
	{
		cin >> s;
		ar[s] = i;
	}
	
	for(int i=0; i<8; i++)
	{
		subs = code.substr(index,10);
		tmp = ar[subs]+'0';
		result += tmp;
		index += 10;
	}
	
	cout << result << endl;
	return 0;
}
